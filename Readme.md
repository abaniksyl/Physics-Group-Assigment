<h1>🎓 Physics Group Assignment — 1</h1>
  <p>Welcome to our group project on <strong>Wave Optics</strong>, specifically focusing on the calculation of wavelength using diffraction.<br />
  This assignment was given by our Physics teacher as part of the <strong>Physics II</strong> coursework.</p>

  <p><strong>📚 Section:</strong> C<br/>
     <strong>👥 Group:</strong> 1<br/>
     <strong>👥Team Name:</strong> CodeQuad</p>

  <hr/>

  <h2>👨‍👩‍👧‍👦 Group Members</h2>
  <table>
    <tr><th>Name</th><th>Student ID</th></tr>
    <tr><td>Rafiwol Karim Rafi</td><td>251-115-150</td></tr>
    <tr><td>Ashik Billah Anik</td><td>251-115-149</td></tr>
    <tr><td>Mustafa Galib Chowdhury</td><td>251-115-118</td></tr>
    <tr><td>Tuhin Islam</td><td>242-115-323</td></tr>
  </table>

  <hr/>

  <h2>🔍 Problem Statement: Wavelength Calculation using Diffraction</h2>
  <p><strong>Objective:</strong> To calculate the wavelength (λ) of light using input values for:</p>
  <ul>
    <li>Angle (θ) in degrees</li>
    <li>Fringe order (m)</li>
    <li>Slit distance (d) in various units: µm, mm, or m</li>
  </ul>

  <h3>🧮 Formula Used:</h3>
  <p><code>λ = (d × sinθ) / m</code></p>
  <p>Where:<br/>
  - λ = Wavelength (in nanometers)<br/>
  - d = Slit separation<br/>
  - θ = Diffraction angle (in degrees)<br/>
  - m = Fringe order</p>

  <hr/>

  <h2>⚙️ How the Program Works</h2>
  <ol>
    <li>Takes user to input angle θ (in degrees)</li>
    <li>Converts the angle to radians</li>
    <li>Takes input for fringe order (m)</li>
    <li>Asks for slit distance d (in µm, mm, or m)</li>
    <li>Applies the formula and calculates λ in nanometers</li>
    <li>Classifies the wavelength into a visible light color</li>
  </ol>

  <hr/>

  <h2>🌈 Color Classification (Based on λ)</h2>
  <table>
    <tr><th>Range (nm)</th><th>Color</th></tr>
    <tr><td>380 – 450</td><td>Violet</td></tr>
    <tr><td>450 – 485</td><td>Blue</td></tr>
    <tr><td>485 – 500</td><td>Cyan</td></tr>
    <tr><td>500 – 565</td><td>Green</td></tr>
    <tr><td>565 – 590</td><td>Yellow</td></tr>
    <tr><td>590 – 625</td><td>Orange</td></tr>
    <tr><td>625 – 750</td><td>Red</td></tr>
  </table>

  <hr/>

  <h2>🖥️ Sample Output</h2>
  <pre>
Enter angle (θ in degrees): 30
Enter fringe order (m): 1
Choose the unit of distance d:

1. µm (micrometer)
2. mm (millimeter)
3. m (meter)

Enter your choice (1/2/3): 1
Enter distance in µm: 1.0

Calculated Wavelength: 500.00 nm
Color: Green
  </pre>

  <hr/>

  <h2>💻 Technologies Used</h2>
  <ul>
    <li>Programming Language: C</li>
    <li>Header Files: <code>math.h</code>, <code>stdio.h</code></li>
  </ul>

  <div class="note">
    <strong>📌 Note:</strong> This project is part of our academic curriculum and intended for educational use only.
  </div>
