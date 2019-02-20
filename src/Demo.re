module D = Json.Decode;
module E = Json.Encode;

type statsRecord = {
  title: string,
  choices: list(string),
  totals: list(int),
};

let sleeveStats = {
  title: "sleeve",
  choices: ["short sleeve", "long sleeve", "extra-long sleeve"],
  totals: [129, 217, 54],
};

let sleeveJson =
  E.object_([
    ("title", E.string(sleeveStats.title)),
    ("choices", E.list(E.string, sleeveStats.choices)),
    ("totals", E.list(E.int, sleeveStats.totals)),
  ]);

Js.log(Json.stringify(sleeveJson));