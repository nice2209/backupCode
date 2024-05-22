import gradio

def greet(name):
    return 'hello, '+ name 

def hi(hello):
    return '#root : hi : ' + hello + "with my " + hello

app=gradio.Interface(
    inputs="text",
    # fn=greet,
    fn=hi,
    outputs="text",
)

app.launch(share=True)