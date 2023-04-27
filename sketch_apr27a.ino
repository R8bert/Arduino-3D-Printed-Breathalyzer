#define VISUINO_ARDUINO_UNO
#define _MITOV_DISPLAY_SSD1306_I2C

#include <OpenWire.h>
#include <Mitov.h>
#include <Wire.h>
#include <Mitov_Basic_I2C.h>
#include <Mitov_Math.h>
#include <Mitov_Text.h>
#include <Mitov_MultiMerger.h>
#include <Mitov_Display_SSD1306_I2C.h>
#include <Mitov_Graphics.h>
#include <Mitov_Graphics_Monochrome.h>
#include <Fonts\Fixed\GraphicsFont5x7.h>

// Shared Component Member Variables

namespace ComponentVariables
{
class
{
public:
  bool Value1 : 1;
  bool Value2 : 1;
  bool Value3 : 1;
  bool Value4 : 1;

} BitFields;

class Variable1
{
public:
  inline static bool GetValue() { return BitFields.Value1; }
  inline static void SetValue( bool AValue ) { BitFields.Value1 = AValue; }

};

class Variable2
{
public:
  inline static bool GetValue() { return BitFields.Value2; }
  inline static void SetValue( bool AValue ) { BitFields.Value2 = AValue; }

};

class Variable3
{
public:
  inline static bool GetValue() { return BitFields.Value3; }
  inline static void SetValue( bool AValue ) { BitFields.Value3 = AValue; }

};

class Variable4
{
public:
  inline static bool GetValue() { return BitFields.Value4; }
  inline static void SetValue( bool AValue ) { BitFields.Value4 = AValue; }

};

} // ComponentVariables

// Arduino Constant Declarations

namespace VisuinoConstants
{
class FloatValue0
{
public:
    inline static constexpr float GetValue() { return 0.300000011920929; }
};

class FloatValue1
{
public:
    inline static constexpr float GetValue() { return 0.811999976634979; }
};

class TextValue3
{
public:
    inline static constexpr const char *GetValue() { return ""; }
};

class TextValue0
{
public:
    inline static constexpr const char *GetValue() { return "Too Drunk!"; }
};

class TextValue2
{
public:
    inline static constexpr const char *GetValue() { return "Alc Level:"; }
};

class TextValue1
{
public:
    inline static constexpr const char *GetValue() { return "Ok"; }
};

} // VisuinoConstants

// Pin Call Declarations

namespace PinCalls
{
class PinCallerReceive0
{
public:
  void Notify( void *_Data );

};
class PinCallerReceive1
{
public:
  void Notify( void *_Data );

};
class PinCallerReceive2
{
public:
  void Notify( void *_Data );

};
class PinCallerReceive3
{
public:
  void Notify( void *_Data );

};
class PinCallerReceive4
{
public:
  void Notify( void *_Data );

};
class PinCallerReceive5
{
public:
  void Notify( void *_Data );

};
class PinCallerReceive6
{
public:
  void Notify( void *_Data );

};
} // PinCalls

// Call Chains

namespace CallChains
{
class TryActive1
{
public:
  inline static constexpr uint32_t Count() { return 0; }
  static void Call( bool & AResult );

};
class TryActive2
{
public:
  inline static constexpr uint32_t Count() { return 0; }
  static void Call( bool & AResult );

};
class Render1
{
public:
  inline static constexpr uint32_t Count() { return 0; }
  static void Call();

};
} // CallChains

// Arduino Board Declarations

namespace BoardDeclarations
{
namespace Types
{
typedef Mitov::ArduinoAnalogInputChannel<1, Mitov::AnalogPin_EmbeddedPinImplementation<6, ::PinCalls::PinCallerReceive0 > > ArduinoAnalogInputChannel_1;
} // Types

namespace Instances
{
Types::ArduinoAnalogInputChannel_1 ArduinoAnalogInputChannel_1;
} // Instances

} // BoardDeclarations

// Declarations

namespace Declarations
{
namespace Types
{
typedef Mitov::CompareValue<
  Mitov::CompareType_Implementation_ctBiggerOrEqual, // CompareType
  Mitov::ConstantProperty<4, bool, true >, // Enabled
  Mitov::TypedVariable<9, bool, ::ComponentVariables::Variable1 >, // FStarted
  Mitov::ConstantProperty<8, bool, true >, // OnlyChanged
  Mitov::DigitalPin_EmbeddedPinImplementation<5, ::PinCalls::PinCallerReceive1 >, // OutputPin
  float, // TYPE
  Mitov::ConstantPropertyFloat<6, float, ::VisuinoConstants::FloatValue0 > // Value
   > CompareValue1;
} // Types

namespace Instances
{
Types::CompareValue1 CompareValue1 = Types::CompareValue1( 0.0f );
} // Instances

namespace Types
{
typedef Mitov::TextValue<
  Mitov::EmbeddedCallChain<CallChains::TryActive1 >, // Elements_TryActive
  Mitov::TextPin_EmbeddedPinImplementation<3, ::PinCalls::PinCallerReceive2 >, // OutputPin
  Mitov::ConstantPropertyString<5, ::VisuinoConstants::TextValue0 > // Value
   > TextValue1;
} // Types

namespace Instances
{
Types::TextValue1 TextValue1;
} // Instances

namespace Types
{
typedef Mitov::TextValue<
  Mitov::EmbeddedCallChain<CallChains::TryActive2 >, // Elements_TryActive
  Mitov::TextPin_EmbeddedPinImplementation<3, ::PinCalls::PinCallerReceive3 >, // OutputPin
  Mitov::ConstantPropertyString<5, ::VisuinoConstants::TextValue1 > // Value
   > TextValue2;
} // Types

namespace Instances
{
Types::TextValue2 TextValue2;
} // Instances

namespace Types
{
typedef Mitov::CompareValue<
  Mitov::CompareType_Implementation_ctSmaller, // CompareType
  Mitov::ConstantProperty<4, bool, true >, // Enabled
  Mitov::TypedVariable<9, bool, ::ComponentVariables::Variable2 >, // FStarted
  Mitov::ConstantProperty<8, bool, true >, // OnlyChanged
  Mitov::DigitalPin_EmbeddedPinImplementation<5, ::PinCalls::PinCallerReceive4 >, // OutputPin
  float, // TYPE
  Mitov::ConstantPropertyFloat<6, float, ::VisuinoConstants::FloatValue0 > // Value
   > CompareValue2;
} // Types

namespace Instances
{
Types::CompareValue2 CompareValue2 = Types::CompareValue2( 0.0f );
} // Instances

namespace Types
{
typedef Mitov::MultiMerger<
  2, // COUNT_InputPins
  Mitov::TextPin_EmbeddedPinImplementation<3, ::PinCalls::PinCallerReceive5 > // OutputPin
   > TextMultiMerger1;
} // Types

namespace Instances
{
Types::TextMultiMerger1 TextMultiMerger1;
} // Instances

namespace Types
{
typedef Mitov::DisplaySSD1306<
  Mitov::Display_odtSSD_I2C<
      TwoWire, // 0_I2C_TYPE_PIN
      Wire, // 1_I2C_NAME_PIN
      Mitov::ConstantProperty<28, uint8_t, 60 > // Address
       >, // 0_IMPLEMENTATION
  Mitov::DisplaySSD1306Buffered<
      64, // Height
      128 // Width
       >, // 0_IMPLEMENTATION_BUFFER
  Mitov::DisplayOrientationUp, // 0_IMPLEMENTATION_ORIENTATION
  Mitov::ConstantProperty<16, Mitov::TArduinoMonochromeColor, Mitov::tmcBlack >, // BackgroundColor
  Mitov::ConstantPropertyFloat<11, float, ::VisuinoConstants::FloatValue1 >, // Contrast
  Mitov::EmbeddedCallChain<CallChains::Render1 >, // Elements_Render
  Mitov::ConstantProperty<29, uint32_t, 0 >, // FCursorX
  Mitov::ConstantProperty<31, uint32_t, 0 >, // FCursorY
  Mitov::ConstantProperty<8, Mitov::TArduinoGraphicsOrientation, Mitov::goUp >, // Orientation
  Mitov::ConstantProperty<25, bool, true >, // PowerOn
  Mitov::NestedProperty<15, Mitov::TArduinoDisplaySSD1306PreChargePeriod<
    Mitov::ConstantProperty<13, uint32_t, 1 >, // Phase1
    Mitov::ConstantProperty<14, uint32_t, 15 > // Phase2
     > >, // PreChargePeriod
  Mitov::DisplaySSD1306NoReset<Mitov::DigitalPin_NoImplementation<4 > >, // ResetOutputPin
  Mitov::NestedProperty<24, Mitov::TGraphicsTextSettings<
    Mitov::ConstantProperty<23, Mitov::TArduinoMonochromeColor, Mitov::tmcNone >, // BackgroundColor
    Mitov::ConstantProperty<22, Mitov::TArduinoMonochromeColor, Mitov::tmcWhite >, // Color
    Mitov::FixedSizeFont<GraphicsFont5x7, 6, 8>, // Font
    Mitov::ConstantProperty<19, uint32_t, 1 >, // Size
    Mitov::ConstantProperty<21, bool, false >, // UseCodePage437Symbols
    Mitov::ConstantProperty<20, bool, true > // Wrap
     > >, // Text
  Mitov::ConstantProperty<27, Mitov::TArduinoDisplayOLEDType, Mitov::odtSSD1306 >, // Type
  Mitov::ConstantProperty<10, bool, false > // UseChargePump
   > DisplayOLED1;
} // Types

namespace Instances
{
Types::DisplayOLED1 DisplayOLED1;
} // Instances

namespace Types
{
typedef Mitov::GraphicsElementDrawText<
  Declarations::Types::DisplayOLED1, // 0_TYPE_OWNER
  Declarations::Instances::DisplayOLED1, // 1_NAME_OWNER
  Mitov::ConstantProperty<4, Mitov::TArduinoMonochromeColor, Mitov::tmcWhite >, // Color
  Mitov::ConstantProperty<2, bool, true >, // Enabled
  Mitov::ConstantProperty<5, Mitov::TArduinoMonochromeColor, Mitov::tmcNone >, // FillColor
  Mitov::NoFont, // Font
  Mitov::MonochromeColorOperations, // OPERATIONS
  Mitov::ConstantProperty<8, uint32_t, 1 >, // Size
  Mitov::ConstantPropertyString<10, ::VisuinoConstants::TextValue2 >, // Text
  Mitov::ConstantProperty<12, bool, false >, // UseCodePage437Symbols
  Mitov::ConstantProperty<11, bool, true >, // Wrap
  Mitov::ConstantProperty<6, int32_t, 0 >, // X
  Mitov::ConstantProperty<7, int32_t, 0 > // Y
   > TArduinoMonochromeGraphicsElementDrawText1;
} // Types

namespace Instances
{
Types::TArduinoMonochromeGraphicsElementDrawText1 TArduinoMonochromeGraphicsElementDrawText1;
} // Instances

namespace Types
{
typedef Mitov::GraphicsElementTextField<
  Declarations::Types::DisplayOLED1, // 0_TYPE_OWNER
  Declarations::Instances::DisplayOLED1, // 1_NAME_OWNER
  Mitov::ConstantProperty<7, bool, true >, // AutoSize
  Mitov::ConstantProperty<4, Mitov::TArduinoMonochromeColor, Mitov::tmcWhite >, // Color
  Mitov::ConstantProperty<2, bool, true >, // Enabled
  Mitov::ConstantProperty<12, Mitov::TArduinoMonochromeColor, Mitov::tmcBlack >, // FillColor
  Mitov::NoFont, // Font
  Mitov::ConstantProperty<11, Mitov::TArduinoTextHorizontalAlign, Mitov::thaLeft >, // HorizontalAlign
  Mitov::VariablePropertyString<16, ::VisuinoConstants::TextValue3 >, // InitialValue
  Mitov::MonochromeColorOperations, // OPERATIONS
  Mitov::ConstantProperty<13, uint32_t, 1 >, // Size
  Mitov::ConstantProperty<9, bool, false >, // UseCodePage437Symbols
  Mitov::ConstantProperty<10, uint32_t, 6 >, // Width
  Mitov::ConstantProperty<8, bool, true >, // Wrap
  Mitov::ConstantProperty<5, int32_t, 10 >, // X
  Mitov::ConstantProperty<6, int32_t, 20 > // Y
   > TArduinoMonochromeGraphicsElementTextFeld1;
} // Types

namespace Instances
{
Types::TArduinoMonochromeGraphicsElementTextFeld1 TArduinoMonochromeGraphicsElementTextFeld1;
} // Instances

namespace Types
{
typedef Mitov::GraphicsElementTextField<
  Declarations::Types::DisplayOLED1, // 0_TYPE_OWNER
  Declarations::Instances::DisplayOLED1, // 1_NAME_OWNER
  Mitov::ConstantProperty<7, bool, true >, // AutoSize
  Mitov::ConstantProperty<4, Mitov::TArduinoMonochromeColor, Mitov::tmcWhite >, // Color
  Mitov::ConstantProperty<2, bool, true >, // Enabled
  Mitov::ConstantProperty<12, Mitov::TArduinoMonochromeColor, Mitov::tmcBlack >, // FillColor
  Mitov::NoFont, // Font
  Mitov::ConstantProperty<11, Mitov::TArduinoTextHorizontalAlign, Mitov::thaLeft >, // HorizontalAlign
  Mitov::VariablePropertyString<16, ::VisuinoConstants::TextValue3 >, // InitialValue
  Mitov::MonochromeColorOperations, // OPERATIONS
  Mitov::ConstantProperty<13, uint32_t, 2 >, // Size
  Mitov::ConstantProperty<9, bool, false >, // UseCodePage437Symbols
  Mitov::ConstantProperty<10, uint32_t, 6 >, // Width
  Mitov::ConstantProperty<8, bool, true >, // Wrap
  Mitov::ConstantProperty<5, int32_t, 0 >, // X
  Mitov::ConstantProperty<6, int32_t, 40 > // Y
   > TArduinoMonochromeGraphicsElementTextFeld2;
} // Types

namespace Instances
{
Types::TArduinoMonochromeGraphicsElementTextFeld2 TArduinoMonochromeGraphicsElementTextFeld2;
} // Instances

namespace Types
{
typedef Mitov::AveragePeriod<
  Mitov::ConstantProperty<5, bool, true >, // Enabled
  Mitov::AnalogPin_EmbeddedPinImplementation<3, ::PinCalls::PinCallerReceive6 >, // OutputPin
  Mitov::ConstantProperty<6, uint32_t, 500000 > // Period
   > AveragePeriod1;
} // Types

namespace Instances
{
Types::AveragePeriod1 AveragePeriod1;
} // Instances

} // Declarations

// Type Converters

namespace TypeConverters
{
Mitov::Convert_BinaryToClock<Mitov::TypedVariable<0, bool, ::ComponentVariables::Variable3 >> Converter0;
Mitov::Convert_BinaryToClock<Mitov::TypedVariable<0, bool, ::ComponentVariables::Variable4 >> Converter1;
Mitov::TypedConvert<float,Mitov::String> Converter2;
} // TypeConverters

// Call Chains

namespace CallChains
{
void TryActive1::Call( bool & AResult )
{
}

void TryActive2::Call( bool & AResult )
{
}

void Render1::Call()
{
  Declarations::Instances::TArduinoMonochromeGraphicsElementDrawText1.Render();
  Declarations::Instances::TArduinoMonochromeGraphicsElementTextFeld1.Render();
  Declarations::Instances::TArduinoMonochromeGraphicsElementTextFeld2.Render();
}

} // CallChains

// Pin Call Declarations

namespace PinCalls
{
void PinCallerConverterReceive1( void *_Data );
void PinCallerConverterReceive2( void *_Data );
void PinCallerConverterReceive3( void *_Data );
} // PinCalls

// Pin Call Implementations

namespace PinCalls
{
void PinCallerReceive0::Notify( void *_Data )
{
  Declarations::Instances::CompareValue1.InputPin_o_Receive( _Data );
  Declarations::Instances::CompareValue2.InputPin_o_Receive( _Data );
  Declarations::Instances::AveragePeriod1.InputPin_o_Receive( _Data );
}

void PinCallerReceive1::Notify( void *_Data )
{
  TypeConverters::Converter0.Convert( _Data, PinCallerConverterReceive1 );
}

void PinCallerConverterReceive1( void *_Data )
{
  Declarations::Instances::TextValue1.ClockInputPin_o_Receive( _Data );
}
void PinCallerReceive2::Notify( void *_Data )
{
  Declarations::Instances::TextMultiMerger1.InputPins_o_Receive( 0, _Data );
}

void PinCallerReceive3::Notify( void *_Data )
{
  Declarations::Instances::TextMultiMerger1.InputPins_o_Receive( 1, _Data );
}

void PinCallerReceive4::Notify( void *_Data )
{
  TypeConverters::Converter1.Convert( _Data, PinCallerConverterReceive2 );
}

void PinCallerConverterReceive2( void *_Data )
{
  Declarations::Instances::TextValue2.ClockInputPin_o_Receive( _Data );
}
void PinCallerReceive5::Notify( void *_Data )
{
  Declarations::Instances::TArduinoMonochromeGraphicsElementTextFeld2.InputPin_o_Receive( _Data );
}

void PinCallerReceive6::Notify( void *_Data )
{
  TypeConverters::Converter2.Convert( _Data, PinCallerConverterReceive3 );
}

void PinCallerConverterReceive3( void *_Data )
{
  Declarations::Instances::TArduinoMonochromeGraphicsElementTextFeld1.InputPin_o_Receive( _Data );
}
} // PinCalls

namespace ComponentsHardware
{
void SystemUpdateHardware()
{
}
} // ComponentsHardware

//The setup function is called once at startup of the sketch
void setup()
{
  Wire.begin();

  BoardDeclarations::Instances::ArduinoAnalogInputChannel_1.SystemInit();
  Declarations::Instances::DisplayOLED1.SystemInit();

  BoardDeclarations::Instances::ArduinoAnalogInputChannel_1.SystemStart();
  Declarations::Instances::CompareValue1.SystemStart();
  Declarations::Instances::CompareValue2.SystemStart();
  Declarations::Instances::DisplayOLED1.SystemStart();
}

// The loop function is called in an endless loop
void loop()
{
  BoardDeclarations::Instances::ArduinoAnalogInputChannel_1.SystemLoopBegin();
  Declarations::Instances::AveragePeriod1.SystemLoopBegin();
  Declarations::Instances::DisplayOLED1.SystemLoopEnd();
}
