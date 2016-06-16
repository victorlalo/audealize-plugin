#include "PluginProcessor.h"
#include "PluginEditor.h"


//==============================================================================
AudealizeeqAudioProcessorEditor::AudealizeeqAudioProcessorEditor (AudealizeeqAudioProcessor& p)
    : AudioProcessorEditor (&p), processor (p)
{
<<<<<<< HEAD
    for (int i = 0; i < NUMBANDS; i++){
        String paramID = "paramGain"+std::to_string(i);
        
        mGainSliders[i] = new Slider (Slider::LinearVertical, Slider::TextBoxBelow);
        addAndMakeVisible(mGainSliders[i]);
        
        mGainSliderAttachment[i] = new AudioProcessorValueTreeState::SliderAttachment (p.getValueTreeState(), paramID, *mGainSliders[i]);
        
        p.getValueTreeState().addParameterListener(paramID, this);
    }
=======
    mEqualizerComponent = new GraphicEQComponent(processor, NUMBANDS);
    addAndMakeVisible(mEqualizerComponent);
>>>>>>> master
    
    // Make sure that before the constructor has finished, you've set the
    // editor's size to whatever you need it to be.
    setSize (400, 200);
}

AudealizeeqAudioProcessorEditor::~AudealizeeqAudioProcessorEditor()
{
<<<<<<< HEAD
    for (int i = 0; i < NUMBANDS; i++){
        mGainSliders[i] = nullptr;
        mGainSliderAttachment[i] = nullptr;
    }
=======
    mEqualizerComponent = nullptr;
>>>>>>> master
}

//==============================================================================
void AudealizeeqAudioProcessorEditor::paint (Graphics& g)
{
    g.fillAll (Colours::white);

    g.setColour (Colours::white);
}

void AudealizeeqAudioProcessorEditor::resized()
{
    // This is generally where you'll want to lay out the positions of any
    // subcomponents in your editor..
    Rectangle<int> box (getLocalBounds());
<<<<<<< HEAD
    box.setWidth(box.getWidth() / 40.);
    for (int i = 0; i < NUMBANDS; i++){
        mGainSliders[i]->setBounds(box);
        box.setX(box.getRight());
    }
    
=======
    mEqualizerComponent->setBounds(box);
>>>>>>> master
}

void AudealizeeqAudioProcessorEditor::parameterChanged(const juce::String &parameterID, float newValue){
    ((AudealizeeqAudioProcessor*)getAudioProcessor())->parameterChanged(parameterID);
}
