import React, { useEffect, useState } from "react";
import "./App.css";

/*
  Make sure your backend runs at: http://127.0.0.1:8000
  Endpoints expected:
    GET    /products
    POST   /products
    PUT    /products/{id}
    DELETE /products/{id}
*/

const API = "http://127.0.0.1:8000/products";

function App() {
  const [products, setProducts] = useState([]);
  const [loadingError, setLoadingError] = useState(null);
  const [form, setForm] = useState({ id: "", name: "", description: "", price: "", quantity: "" });
  const [search, setSearch] = useState("");
  const [editing, setEditing] = useState(null);

  // load products
  const loadProducts = async () => {
    setLoadingError(null);
    try {
      const res = await fetch(API);
      if (!res.ok) throw new Error(`HTTP ${res.status}`);
      const data = await res.json();
      setProducts(Array.isArray(data) ? data : []);
    } catch (err) {
      console.error("Load error:", err);
      setLoadingError("Could not reach backend. Is FastAPI running? Check CORS and URL.");
      setProducts([]);
    }
  };

  useEffect(() => {
    loadProducts();
  }, []);

  // form helpers
  const handle = (e) => setForm({ ...form, [e.target.name]: e.target.value });

  const clearForm = () => setForm({ id: "", name: "", description: "", price: "", quantity: "" });

  // Add product
  const addProduct = async () => {
    try {
      await fetch(API, {
        method: "POST",
        headers: { "Content-Type": "application/json" },
        body: JSON.stringify(form),
      });
      clearForm();
      loadProducts();
    } catch (err) {
      console.error(err);
    }
  };

  // Delete
  const deleteProduct = async (id) => {
    if (!window.confirm("Delete this product?")) return;
    await fetch(`${API}/${id}`, { method: "DELETE" });
    loadProducts();
  };

  // Start edit
  const startEdit = (p) => {
    setEditing(p.id);
    setForm({ ...p });
  };

  // Save edit
  const saveEdit = async () => {
    await fetch(`${API}/${editing}`, {
      method: "PUT",
      headers: { "Content-Type": "application/json" },
      body: JSON.stringify(form),
    });
    setEditing(null);
    clearForm();
    loadProducts();
  };

  // Filtered list
  const filtered = products.filter((p) => {
    const q = search.trim().toLowerCase();
    if (!q) return true;
    return (
      String(p.id).toLowerCase().includes(q) ||
      (p.name || "").toLowerCase().includes(q) ||
      (p.description || "").toLowerCase().includes(q)
    );
  });

  return (
    <div className="app">
      <div className="header">
        <div className="brand">
          <div className="logo">📦</div>
          <h1>Telusko Trac</h1>
        </div>

        <div style={{ display: "flex", gap: 12, alignItems: "center" }}>
          <div className="total-pill">Total: {products.length}</div>
          <button className="btn btn-ghost" onClick={loadProducts}>Refresh</button>
        </div>
      </div>

      <div className="left">
        {/* Add Product card */}
        <div className="card">
          <h3 style={{margin:0}}>Add Product</h3>
          <div className="form-row" style={{marginTop:12}}>
            <div className="input"><input name="id" placeholder="ID" value={form.id} onChange={handle} disabled={!!editing} /></div>
            <div className="input"><input name="name" placeholder="Name" value={form.name} onChange={handle} /></div>
            <div className="input"><input name="description" placeholder="Description" value={form.description} onChange={handle} /></div>
            <div className="input"><input name="price" placeholder="Price" value={form.price} onChange={handle} /></div>
            <div style={{width:120}}><input name="quantity" placeholder="Quantity" value={form.quantity} onChange={handle} /></div>
          </div>

          <div style={{marginTop:14}}>
            {editing ? (
              <>
                <button className="btn btn-primary" onClick={saveEdit}>Save Changes</button>
                <button className="btn" style={{marginLeft:8}} onClick={() => { setEditing(null); clearForm(); }}>Cancel</button>
              </>
            ) : (
              <button className="btn btn-primary" onClick={addProduct}>Add</button>
            )}
          </div>

          {loadingError && <div style={{marginTop:12,color:"#b00020"}}>{loadingError}</div>}
        </div>

        {/* Products list */}
        <div className="card products-card">
          <h3 className="title">Products</h3>
          <table className="table" aria-label="Products table">
            <thead>
              <tr>
                <th style={{width:40}}>ID</th>
                <th>Name</th>
                <th>Description</th>
                <th style={{width:120}}>Price</th>
                <th style={{width:90}}>Quantity</th>
                <th style={{width:180}}>Actions</th>
              </tr>
            </thead>
            <tbody>
              {filtered.length === 0 && (
                <tr>
                  <td colSpan="6" style={{padding:18, color:"#777"}}>No products found.</td>
                </tr>
              )}
              {filtered.map((p) => (
                <tr key={p.id}>
                  <td>{p.id}</td>
                  <td style={{fontWeight:600}}>{p.name}</td>
                  <td style={{color:"#666"}}>{p.description}</td>
                  <td className="price">${p.price}</td>
                  <td>{p.quantity}</td>
                  <td>
                    <div className="action">
                      <button className="small-btn small-edit" onClick={() => startEdit(p)}>Edit</button>
                      <button className="small-btn small-delete" onClick={() => deleteProduct(p.id)}>Delete</button>
                    </div>
                  </td>
                </tr>
              ))}
            </tbody>
          </table>
        </div>
      </div>

      {/* Right info column */}
      <div className="info-card">
        <div className="card info-card-inner">
          <div className="badge">Track. Manage. Grow.</div>
          <h3 style={{marginTop:6}}>Streamline your inventory with smart product management.</h3>
          <p style={{color:"#666", marginTop:10}}>Search, add, update or delete products — powered by Telusko style UI.</p>

          <div className="search" style={{marginTop:12}}>
            <input placeholder="Search by id, name or description..." value={search} onChange={(e)=>setSearch(e.target.value)} />
          </div>

          <div style={{display:"flex", justifyContent:"space-between", marginTop:12}}>
            <button className="btn btn-ghost" onClick={() => { setSearch(""); }}>Clear</button>
            <button className="btn btn-primary" onClick={loadProducts}>Sync</button>
          </div>
        </div>
      </div>

      {/* Edit Modal */}
      {editing && (
        <div className="modal-backdrop" onClick={() => { setEditing(null); clearForm(); }}>
          <div className="modal" onClick={(e)=>e.stopPropagation()}>
            <h3 style={{margin:0}}>Edit Product</h3>
            <div className="row" style={{marginTop:12}}>
              <input name="id" value={form.id} onChange={handle} disabled />
              <input name="name" value={form.name} onChange={handle} />
            </div>
            <div className="row">
              <input name="description" value={form.description} onChange={handle} />
              <input name="price" value={form.price} onChange={handle} />
            </div>
            <div className="row">
              <input name="quantity" value={form.quantity} onChange={handle} />
            </div>

            <div className="footer">
              <button className="small-cancel" onClick={() => { setEditing(null); clearForm(); }}>Cancel</button>
              <button className="small-save" onClick={saveEdit}>Save</button>
            </div>
          </div>
        </div>
      )}
    </div>
  );
}

export default App;
