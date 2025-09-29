import React, { useState } from "react";

function GraduateComponent() {
    const [degree, setDegree] = useState("");
    const [year, setYear] = useState("");
    const [finalScore, setFinalScore] = useState("");
    const [univ, setUniv] = useState("");

    return (
        <div>
            <h3>Graduate Details</h3>
            <input
                type="text"
                placeholder="Degree"
                value={degree}
                onChange={(e) => setDegree(e.target.value)}
            />
            <input
                type="number"
                placeholder="Year"
                value={year}
                onChange={(e) => setYear(e.target.value)}
            />
            <input
                type="number"
                placeholder="Final Year Score"
                value={finalScore}
                onChange={(e) => setFinalScore(e.target.value)}
            />
            <input
                type="text"
                placeholder="University"
                value={univ}
                onChange={(e) => setUniv(e.target.value)}
            />
        </div>
    );
}

function PGComponent() {
    const [year, setYear] = useState("");
    const [thesis, setThesis] = useState("");

    return (
        <div>
            <h3>PG Details</h3>
            <input
                type="number"
                placeholder="Year"
                value={year}
                onChange={(e) => setYear(e.target.value)}
            />
            <input
                type="text"
                placeholder="Thesis Subject"
                value={thesis}
                onChange={(e) => setThesis(e.target.value)}
            />
        </div>
    );
}

function UnderGradComponent() {
    const [ssc, setSsc] = useState("");
    const [hsc, setHsc] = useState("");

    return (
        <div>
            <h3>UnderGrad Details</h3>
            <input
                type="text"
                placeholder="SSC"
                value={ssc}
                onChange={(e) => setSsc(e.target.value)}
            />
            <input
                type="text"
                placeholder="HSC"
                value={hsc}
                onChange={(e) => setHsc(e.target.value)}
            />
        </div>
    );
}

function UserDetailsForm() {
    const [name, setName] = useState("");
    const [email, setEmail] = useState("");
    const [education, setEducation] = useState(""); // Graduate, PG, UnderGrad

    return (
        <div>
            <h2>User Details</h2>
            <div>
                <input
                    type="text"
                    placeholder="Name"
                    value={name}
                    onChange={(e) => setName(e.target.value)}
                />
            </div>

            <div>
                <input
                    type="email"
                    placeholder="Email"
                    value={email}
                    onChange={(e) => setEmail(e.target.value)}
                />
            </div>

            <div>
                <select
                    value={education}
                    onChange={(e) => setEducation(e.target.value)}
                >
                    <option value="">Select Education</option>
                    <option value="Graduate">Graduate</option>
                    <option value="PG">PG</option>
                    <option value="UnderGrad">UnderGrad</option>
                </select>
            </div>

            <div style={{ marginTop: "15px" }}>
                {education === "Graduate" && <GraduateComponent />}
                {education === "PG" && <PGComponent />}
                {education === "UnderGrad" && <UnderGradComponent />}
            </div>
        </div>
    );
}

export default UserDetailsForm;
