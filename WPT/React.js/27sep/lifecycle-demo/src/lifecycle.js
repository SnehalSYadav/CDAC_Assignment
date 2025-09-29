import React, { Component } from 'react';

class App extends Component {
  constructor(props) {
    super(props);
    this.state = {
      count: 0,
    };
    console.log('Constructor: Component is being constructed');
  }

  componentDidMount() {
    console.log('componentDidMount: Component has mounted');
  }

  componentDidUpdate(prevProps, prevState) {
    if (prevState.count !== this.state.count) {
      console.log(`componentDidUpdate: Count changed from ${prevState.count} to ${this.state.count}`);
    }
  }

  componentWillUnmount() {
    console.log('componentWillUnmount: Component is about to be removed');
  }

  increment = () => {
    this.setState((prevState) => ({
      count: prevState.count + 1,
    }));
  };

  render() {
    console.log('Render: Component is rendering');
    return (
      <div style={{ padding: '20px', fontFamily: 'Arial' }}>
        <h1>React Class Component Lifecycle</h1>
        <p>Count: {this.state.count}</p>
        <button onClick={this.increment}>Increment</button>
      </div>
    );
  }
}

export default App;
