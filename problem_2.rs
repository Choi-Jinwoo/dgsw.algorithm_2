fn main() {
    let mut count = 0;
    let mut num = 2;

    loop {
        if is_primary(num) {
            println!("소수 : {}", num);
            count += 1;
        }

        if count == 10 {
            return;
        }

        num += 1;
    }
}

fn is_primary(num: i32) -> bool {
    let mut i = 2;
    loop {
        if num - 1 < i {
            return true;
        }

        if num % i == 0 {
            return false;
        }

        i += 1;
    }

    return true;
}

