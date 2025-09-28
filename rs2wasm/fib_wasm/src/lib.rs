#[unsafe(no_mangle)]
pub fn fibonacci(num: i32) -> i32 {
    match num {
        0 => 0,
        1 => 1,
        _ => fibonacci(num-1) + fibonacci(num-2),
    }
}