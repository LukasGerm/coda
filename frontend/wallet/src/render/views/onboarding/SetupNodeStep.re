[@bs.scope "window"] [@bs.val] external openExternal: string => unit = "";

[@react.component]
let make = (~customSetup, ~expressSetup) => {
  <OnboardingTemplate
    heading="Setting Up Your Node"
    description={
      <p>
        {React.string(
           "Your node will allow you to connect to the Coda Network and make transactions.",
         )}
      </p>
    }
    miscLeft=
      <>
        <Spacer height=2.0 />
        <div className=OnboardingTemplate.Styles.buttonRow>
          <Button
            style=Button.MidnightBlue
            label="Custom Setup"
            onClick={_ => customSetup()}
          />
          <Spacer width=0.5 />
          <Button
            label="Express Setup"
            style=Button.HyperlinkBlue
            onClick={_ => expressSetup()}
          />
        </div>
      </>
  />;
};
