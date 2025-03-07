import OpenAI from "openai";
let myapikey = "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"; 
const openai = new OpenAI();

const completion = await openai.chat.completions.create({
    model: "gpt-4o-mini",
    messages: [
        { role: "system", content: "You are a helpful assistant." },
        {
            role: "user",
            content: "Write a haiku about recursion in programming.",
        },
    ],
    store: true,
});

console.log(completion.choices[0].message);