const user = {
    name: 'javascript'
};

const id = Symbol('id');
user[id] = 'firstId';

// Symbol은 유일한 값이라서 외부에서 직접 접근할 수 없습니다.
console.log(user[Symbol('id')]); //undefined