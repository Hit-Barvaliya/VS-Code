from django.shortcuts import render

from django.http import HttpResponse

# Create your views here.

def home_func(request):
    return HttpResponse('Hello World')

def homepg(request):
    return render(request,'home.html',{'name':'Kiran'})

def add(request):

    num1 = int(request.POST["num1"])
    num2 = int(request.POST["num2"])

    answer = num1 + num2

    return render(request, 'result.html', {'answer':answer})