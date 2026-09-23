from django.urls import path

from . import views

urlpatterns = [
    path('home/',views.home_func, name='home'),
    path('homepage/',views.homepg, name = 'homepage'),
    path('homepage/add', views.add, name = 'add')
]
