function addTask(){
const input = document.getElementById("listInput");
const list = document.getElementById("taskList");

if (input.value.trim() !== "") {
    let li = document.createElement("li");
    li.textContent = input.value.trim();

    li.appendChild(Object.assign(document.createElement("button"), { 
        textContent: " ❌", style: "margin-left: 10px; cursor: pointer;", 
        onclick() { li.remove(); } 
    }));

    list.prepend(li);
    input.value = "";
}
else{
    alert("Please enter a task");
}
}