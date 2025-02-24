function addTask(){
const input = document.getElementById("listInput");
const list = document.getElementById("taskList");

if (input.value.trim() !== "") {
    let li = document.createElement("li");
    li.textContent = input.value.trim();

    let removeBtn = document.createElement("button");
        removeBtn.textContent = "❌";
        removeBtn.classList.add("remove-btn");
        removeBtn.onclick = () => li.remove();

    li.appendChild(removeBtn);
    list.prepend(li);
    input.value = "";
}
else{
    alert("Please enter a task");
}
}