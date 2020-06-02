fn main() {
    let num_1 = 6;
    let num_2 = 9;
    let mut gcd = 0;
    let mut count = 1;

    loop {
        if num_1 < count || num_2 < count {
            break;
        }

        if num_1 % count == 0 && num_2 % count == 0 {
            gcd = count;
        }

        count += 1;
    }

    println!("gcd = {}", gcd);
}
