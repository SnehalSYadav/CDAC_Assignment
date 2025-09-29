import React, { Component } from 'react';

class TextTransformer extends Component {
  constructor(props) {
    super(props);
    this.state = {
      text: ''
    };
  }

  handleChange = (event) => {
    this.setState({ text: event.target.value });
  };

 
  handleUpperCase = () => {
  this.setState({ text: this.state.text.toUpperCase() });
};

handleLowerCase = () => {
  this.setState({ text: this.state.text.toLowerCase() });
};


  render() {
    return (
      <div>
        <input
          type="text"
          placeholder="Enter text"
          value={this.state.text}
          onChange={this.handleChange}
        />
        <br /><br />
        <button onClick={this.handleUpperCase}>UPPER CASE</button>
        <button onClick={this.handleLowerCase}>lower case</button>
      </div>
    );
  }
}

export default TextTransformer;
