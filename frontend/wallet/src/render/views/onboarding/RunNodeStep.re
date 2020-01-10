[@bs.scope "window"] [@bs.val] external openExternal: string => unit = "";

[@react.component]
let make = (~prevStep, ~createAccount) => {
  <OnboardingTemplate
    heading="Connecting to the Network"
    description={
      <p>
        {React.string(
           "Establishing a connection typically takes between 5-15 minutes.",
         )}
      </p>
    }
    miscLeft=
      <>
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
            onClick={_ => createAccount()}
          />
        </div>
      </>
  />;
};
