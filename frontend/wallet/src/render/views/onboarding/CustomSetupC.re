[@bs.scope "window"] [@bs.val] external openExternal: string => unit = "";

[@react.component]
let make = (~prevStep, ~runNode) => {
  let (ip, setIp) = React.useState(() => "123.43.234.23");

  <OnboardingTemplate
    heading="Custom Setup"
    description={<p> {React.string("Where have you set up Coda?")} </p>}
    miscLeft=
      <>
        <TextField
          label="IP Address"
          onChange={value => setIp(_ => value)}
          value=ip
        />
        <Spacer height=2.0 />
        <div className=OnboardingTemplate.Styles.buttonRow>
          <Button
            style=Button.MidnightBlue
            label="Go Back"
            onClick={_ => prevStep()}
          />
          <Spacer width=0.5 />
          <Button
            label="Continue"
            style=Button.HyperlinkBlue
            onClick={_ => runNode()}
          />
        </div>
      </>
  />;
};
