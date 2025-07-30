#pragma once

#include "CoreMinimal.h"
#include "JsonObjectConverter.h"
#include "OpenStageControlJson.generated.h"

USTRUCT(Category="JSON|OpenStageControlJson", BlueprintType)
struct FOpenStageControlJsonContentTabWidgetWidget
{

  GENERATED_BODY()

  UPROPERTY(Category="JSON|OpenStageControlJson|widget", EditAnywhere, BlueprintReadWrite)
  FString type;

  UPROPERTY(Category="JSON|OpenStageControlJson|widget", EditAnywhere, BlueprintReadWrite)
  int32 top;

  UPROPERTY(Category="JSON|OpenStageControlJson|widget", EditAnywhere, BlueprintReadWrite)
  int32 left;

  UPROPERTY(Category="JSON|OpenStageControlJson|widget", EditAnywhere, BlueprintReadWrite)
  bool lock;

  UPROPERTY(Category="JSON|OpenStageControlJson|widget", EditAnywhere, BlueprintReadWrite)
  FString id;

  UPROPERTY(Category="JSON|OpenStageControlJson|widget", EditAnywhere, BlueprintReadWrite)
  bool visible;

  UPROPERTY(Category="JSON|OpenStageControlJson|widget", EditAnywhere, BlueprintReadWrite)
  bool interaction;

  UPROPERTY(Category="JSON|OpenStageControlJson|widget", EditAnywhere, BlueprintReadWrite)
  FString comments;

  UPROPERTY(Category="JSON|OpenStageControlJson|widget", EditAnywhere, BlueprintReadWrite)
  int32 width;

  UPROPERTY(Category="JSON|OpenStageControlJson|widget", EditAnywhere, BlueprintReadWrite)
  int32 height;

  UPROPERTY(Category="JSON|OpenStageControlJson|widget", EditAnywhere, BlueprintReadWrite)
  bool expand;

  UPROPERTY(Category="JSON|OpenStageControlJson|widget", EditAnywhere, BlueprintReadWrite)
  FString colorText;

  UPROPERTY(Category="JSON|OpenStageControlJson|widget", EditAnywhere, BlueprintReadWrite)
  FString colorWidget;

  UPROPERTY(Category="JSON|OpenStageControlJson|widget", EditAnywhere, BlueprintReadWrite)
  FString colorStroke;

  UPROPERTY(Category="JSON|OpenStageControlJson|widget", EditAnywhere, BlueprintReadWrite)
  FString colorFill;

  UPROPERTY(Category="JSON|OpenStageControlJson|widget", EditAnywhere, BlueprintReadWrite)
  FString alphaStroke;

  UPROPERTY(Category="JSON|OpenStageControlJson|widget", EditAnywhere, BlueprintReadWrite)
  FString alphaFillOff;

  UPROPERTY(Category="JSON|OpenStageControlJson|widget", EditAnywhere, BlueprintReadWrite)
  FString alphaFillOn;

  UPROPERTY(Category="JSON|OpenStageControlJson|widget", EditAnywhere, BlueprintReadWrite)
  FString lineWidth;

  UPROPERTY(Category="JSON|OpenStageControlJson|widget", EditAnywhere, BlueprintReadWrite)
  FString borderRadius;

  UPROPERTY(Category="JSON|OpenStageControlJson|widget", EditAnywhere, BlueprintReadWrite)
  FString padding;

  UPROPERTY(Category="JSON|OpenStageControlJson|widget", EditAnywhere, BlueprintReadWrite)
  FString html;

  UPROPERTY(Category="JSON|OpenStageControlJson|widget", EditAnywhere, BlueprintReadWrite)
  FString css;

  UPROPERTY(Category="JSON|OpenStageControlJson|widget", EditAnywhere, BlueprintReadWrite)
  FString colorTextOn;

  UPROPERTY(Category="JSON|OpenStageControlJson|widget", EditAnywhere, BlueprintReadWrite)
  FString label;

  UPROPERTY(Category="JSON|OpenStageControlJson|widget", EditAnywhere, BlueprintReadWrite)
  bool vertical;

  UPROPERTY(Category="JSON|OpenStageControlJson|widget", EditAnywhere, BlueprintReadWrite)
  bool wrap;

  UPROPERTY(Category="JSON|OpenStageControlJson|widget", EditAnywhere, BlueprintReadWrite)
  int32 on;

  UPROPERTY(Category="JSON|OpenStageControlJson|widget", EditAnywhere, BlueprintReadWrite)
  int32 off;

  UPROPERTY(Category="JSON|OpenStageControlJson|widget", EditAnywhere, BlueprintReadWrite)
  FString mode;

  UPROPERTY(Category="JSON|OpenStageControlJson|widget", EditAnywhere, BlueprintReadWrite)
  bool doubleTap;

  UPROPERTY(Category="JSON|OpenStageControlJson|widget", EditAnywhere, BlueprintReadWrite)
  bool decoupled;

  UPROPERTY(Category="JSON|OpenStageControlJson|widget", EditAnywhere, BlueprintReadWrite)
  FString value;

  UPROPERTY(Category="JSON|OpenStageControlJson|widget", EditAnywhere, BlueprintReadWrite)
  FString default__;

  UPROPERTY(Category="JSON|OpenStageControlJson|widget", EditAnywhere, BlueprintReadWrite)
  FString linkId;

  UPROPERTY(Category="JSON|OpenStageControlJson|widget", EditAnywhere, BlueprintReadWrite)
  FString address;

  UPROPERTY(Category="JSON|OpenStageControlJson|widget", EditAnywhere, BlueprintReadWrite)
  FString preArgs;

  UPROPERTY(Category="JSON|OpenStageControlJson|widget", EditAnywhere, BlueprintReadWrite)
  FString typeTags;

  UPROPERTY(Category="JSON|OpenStageControlJson|widget", EditAnywhere, BlueprintReadWrite)
  int32 decimals;

  UPROPERTY(Category="JSON|OpenStageControlJson|widget", EditAnywhere, BlueprintReadWrite)
  FString target;

  UPROPERTY(Category="JSON|OpenStageControlJson|widget", EditAnywhere, BlueprintReadWrite)
  bool ignoreDefaults;

  UPROPERTY(Category="JSON|OpenStageControlJson|widget", EditAnywhere, BlueprintReadWrite)
  bool bypass;

  UPROPERTY(Category="JSON|OpenStageControlJson|widget", EditAnywhere, BlueprintReadWrite)
  FString onCreate;

  UPROPERTY(Category="JSON|OpenStageControlJson|widget", EditAnywhere, BlueprintReadWrite)
  FString onValue;

  FOpenStageControlJsonContentTabWidgetWidget() {};

  FOpenStageControlJsonContentTabWidgetWidget( FString _type, int32 _top, int32 _left, bool _lock, FString _id, bool _visible, bool _interaction, FString _comments, int32 _width, int32 _height, bool _expand, FString _colorText, FString _colorWidget, FString _colorStroke, FString _colorFill, FString _alphaStroke, FString _alphaFillOff, FString _alphaFillOn, FString _lineWidth, FString _borderRadius, FString _padding, FString _html, FString _css, FString _colorTextOn, FString _label, bool _vertical, bool _wrap, int32 _on, int32 _off, FString _mode, bool _doubleTap, bool _decoupled, FString _value, FString _default, FString _linkId, FString _address, FString _preArgs, FString _typeTags, int32 _decimals, FString _target, bool _ignoreDefaults, bool _bypass, FString _onCreate, FString _onValue ){

    type = _type;
    top = _top;
    left = _left;
    lock = _lock;
    id = _id;
    visible = _visible;
    interaction = _interaction;
    comments = _comments;
    width = _width;
    height = _height;
    expand = _expand;
    colorText = _colorText;
    colorWidget = _colorWidget;
    colorStroke = _colorStroke;
    colorFill = _colorFill;
    alphaStroke = _alphaStroke;
    alphaFillOff = _alphaFillOff;
    alphaFillOn = _alphaFillOn;
    lineWidth = _lineWidth;
    borderRadius = _borderRadius;
    padding = _padding;
    html = _html;
    css = _css;
    colorTextOn = _colorTextOn;
    label = _label;
    vertical = _vertical;
    wrap = _wrap;
    on = _on;
    off = _off;
    mode = _mode;
    doubleTap = _doubleTap;
    decoupled = _decoupled;
    value = _value;
    default__ = _default;
    linkId = _linkId;
    address = _address;
    preArgs = _preArgs;
    typeTags = _typeTags;
    decimals = _decimals;
    target = _target;
    ignoreDefaults = _ignoreDefaults;
    bypass = _bypass;
    onCreate = _onCreate;
    onValue = _onValue;
  
  }
  
};

USTRUCT(Category="JSON|OpenStageControlJson", BlueprintType)
struct FOpenStageControlJsonContentTabWidget
{

  GENERATED_BODY()

  UPROPERTY(Category="JSON|OpenStageControlJson|widget", EditAnywhere, BlueprintReadWrite)
  FString type;

  UPROPERTY(Category="JSON|OpenStageControlJson|widget", EditAnywhere, BlueprintReadWrite)
  FString top;

  UPROPERTY(Category="JSON|OpenStageControlJson|widget", EditAnywhere, BlueprintReadWrite)
  FString left;

  UPROPERTY(Category="JSON|OpenStageControlJson|widget", EditAnywhere, BlueprintReadWrite)
  bool lock;

  UPROPERTY(Category="JSON|OpenStageControlJson|widget", EditAnywhere, BlueprintReadWrite)
  FString id;

  UPROPERTY(Category="JSON|OpenStageControlJson|widget", EditAnywhere, BlueprintReadWrite)
  bool visible;

  UPROPERTY(Category="JSON|OpenStageControlJson|widget", EditAnywhere, BlueprintReadWrite)
  bool interaction;

  UPROPERTY(Category="JSON|OpenStageControlJson|widget", EditAnywhere, BlueprintReadWrite)
  FString comments;

  UPROPERTY(Category="JSON|OpenStageControlJson|widget", EditAnywhere, BlueprintReadWrite)
  FString width;

  UPROPERTY(Category="JSON|OpenStageControlJson|widget", EditAnywhere, BlueprintReadWrite)
  FString height;

  UPROPERTY(Category="JSON|OpenStageControlJson|widget", EditAnywhere, BlueprintReadWrite)
  bool expand;

  UPROPERTY(Category="JSON|OpenStageControlJson|widget", EditAnywhere, BlueprintReadWrite)
  FString colorText;

  UPROPERTY(Category="JSON|OpenStageControlJson|widget", EditAnywhere, BlueprintReadWrite)
  FString colorWidget;

  UPROPERTY(Category="JSON|OpenStageControlJson|widget", EditAnywhere, BlueprintReadWrite)
  FString colorStroke;

  UPROPERTY(Category="JSON|OpenStageControlJson|widget", EditAnywhere, BlueprintReadWrite)
  FString colorFill;

  UPROPERTY(Category="JSON|OpenStageControlJson|widget", EditAnywhere, BlueprintReadWrite)
  FString alphaStroke;

  UPROPERTY(Category="JSON|OpenStageControlJson|widget", EditAnywhere, BlueprintReadWrite)
  FString alphaFillOff;

  UPROPERTY(Category="JSON|OpenStageControlJson|widget", EditAnywhere, BlueprintReadWrite)
  FString alphaFillOn;

  UPROPERTY(Category="JSON|OpenStageControlJson|widget", EditAnywhere, BlueprintReadWrite)
  FString lineWidth;

  UPROPERTY(Category="JSON|OpenStageControlJson|widget", EditAnywhere, BlueprintReadWrite)
  FString borderRadius;

  UPROPERTY(Category="JSON|OpenStageControlJson|widget", EditAnywhere, BlueprintReadWrite)
  FString padding;

  UPROPERTY(Category="JSON|OpenStageControlJson|widget", EditAnywhere, BlueprintReadWrite)
  FString html;

  UPROPERTY(Category="JSON|OpenStageControlJson|widget", EditAnywhere, BlueprintReadWrite)
  FString css;

  UPROPERTY(Category="JSON|OpenStageControlJson|widget", EditAnywhere, BlueprintReadWrite)
  FString colorBg;

  UPROPERTY(Category="JSON|OpenStageControlJson|widget", EditAnywhere, BlueprintReadWrite)
  FString layout;

  UPROPERTY(Category="JSON|OpenStageControlJson|widget", EditAnywhere, BlueprintReadWrite)
  FString justify;

  UPROPERTY(Category="JSON|OpenStageControlJson|widget", EditAnywhere, BlueprintReadWrite)
  FString gridTemplate;

  UPROPERTY(Category="JSON|OpenStageControlJson|widget", EditAnywhere, BlueprintReadWrite)
  bool contain;

  UPROPERTY(Category="JSON|OpenStageControlJson|widget", EditAnywhere, BlueprintReadWrite)
  bool scroll;

  UPROPERTY(Category="JSON|OpenStageControlJson|widget", EditAnywhere, BlueprintReadWrite)
  bool innerPadding;

  UPROPERTY(Category="JSON|OpenStageControlJson|widget", EditAnywhere, BlueprintReadWrite)
  FString tabsPosition;

  UPROPERTY(Category="JSON|OpenStageControlJson|widget", EditAnywhere, BlueprintReadWrite)
  FString variables;

  UPROPERTY(Category="JSON|OpenStageControlJson|widget", EditAnywhere, BlueprintReadWrite)
  bool traversing;

  UPROPERTY(Category="JSON|OpenStageControlJson|widget", EditAnywhere, BlueprintReadWrite)
  FString value;

  UPROPERTY(Category="JSON|OpenStageControlJson|widget", EditAnywhere, BlueprintReadWrite)
  FString default__;

  UPROPERTY(Category="JSON|OpenStageControlJson|widget", EditAnywhere, BlueprintReadWrite)
  FString linkId;

  UPROPERTY(Category="JSON|OpenStageControlJson|widget", EditAnywhere, BlueprintReadWrite)
  FString address;

  UPROPERTY(Category="JSON|OpenStageControlJson|widget", EditAnywhere, BlueprintReadWrite)
  FString preArgs;

  UPROPERTY(Category="JSON|OpenStageControlJson|widget", EditAnywhere, BlueprintReadWrite)
  FString typeTags;

  UPROPERTY(Category="JSON|OpenStageControlJson|widget", EditAnywhere, BlueprintReadWrite)
  int32 decimals;

  UPROPERTY(Category="JSON|OpenStageControlJson|widget", EditAnywhere, BlueprintReadWrite)
  FString target;

  UPROPERTY(Category="JSON|OpenStageControlJson|widget", EditAnywhere, BlueprintReadWrite)
  bool ignoreDefaults;

  UPROPERTY(Category="JSON|OpenStageControlJson|widget", EditAnywhere, BlueprintReadWrite)
  bool bypass;

  UPROPERTY(Category="JSON|OpenStageControlJson|widget", EditAnywhere, BlueprintReadWrite)
  FString onCreate;

  UPROPERTY(Category="JSON|OpenStageControlJson|widget", EditAnywhere, BlueprintReadWrite)
  FString onValue;

  UPROPERTY(Category="JSON|OpenStageControlJson|widget", EditAnywhere, BlueprintReadWrite)
  FString onTouch;

  UPROPERTY(Category="JSON|OpenStageControlJson|widget", EditAnywhere, BlueprintReadWrite)
  TArray<FOpenStageControlJsonContentTabWidgetWidget> widgets;

  FOpenStageControlJsonContentTabWidget() {};

  FOpenStageControlJsonContentTabWidget( FString _type, FString _top, FString _left, bool _lock, FString _id, bool _visible, bool _interaction, FString _comments, FString _width, FString _height, bool _expand, FString _colorText, FString _colorWidget, FString _colorStroke, FString _colorFill, FString _alphaStroke, FString _alphaFillOff, FString _alphaFillOn, FString _lineWidth, FString _borderRadius, FString _padding, FString _html, FString _css, FString _colorBg, FString _layout, FString _justify, FString _gridTemplate, bool _contain, bool _scroll, bool _innerPadding, FString _tabsPosition, FString _variables, bool _traversing, FString _value, FString _default, FString _linkId, FString _address, FString _preArgs, FString _typeTags, int32 _decimals, FString _target, bool _ignoreDefaults, bool _bypass, FString _onCreate, FString _onValue, FString _onTouch, TArray<FOpenStageControlJsonContentTabWidgetWidget> _widgets ){

    type = _type;
    top = _top;
    left = _left;
    lock = _lock;
    id = _id;
    visible = _visible;
    interaction = _interaction;
    comments = _comments;
    width = _width;
    height = _height;
    expand = _expand;
    colorText = _colorText;
    colorWidget = _colorWidget;
    colorStroke = _colorStroke;
    colorFill = _colorFill;
    alphaStroke = _alphaStroke;
    alphaFillOff = _alphaFillOff;
    alphaFillOn = _alphaFillOn;
    lineWidth = _lineWidth;
    borderRadius = _borderRadius;
    padding = _padding;
    html = _html;
    css = _css;
    colorBg = _colorBg;
    layout = _layout;
    justify = _justify;
    gridTemplate = _gridTemplate;
    contain = _contain;
    scroll = _scroll;
    innerPadding = _innerPadding;
    tabsPosition = _tabsPosition;
    variables = _variables;
    traversing = _traversing;
    value = _value;
    default__ = _default;
    linkId = _linkId;
    address = _address;
    preArgs = _preArgs;
    typeTags = _typeTags;
    decimals = _decimals;
    target = _target;
    ignoreDefaults = _ignoreDefaults;
    bypass = _bypass;
    onCreate = _onCreate;
    onValue = _onValue;
    onTouch = _onTouch;
    widgets = _widgets;
  
  }
  
};

USTRUCT(Category="JSON|OpenStageControlJson", BlueprintType)
struct FOpenStageControlJsonContentTab
{

  GENERATED_BODY()

  UPROPERTY(Category="JSON|OpenStageControlJson|tab", EditAnywhere, BlueprintReadWrite)
  FString type;

  UPROPERTY(Category="JSON|OpenStageControlJson|tab", EditAnywhere, BlueprintReadWrite)
  bool lock;

  UPROPERTY(Category="JSON|OpenStageControlJson|tab", EditAnywhere, BlueprintReadWrite)
  FString id;

  UPROPERTY(Category="JSON|OpenStageControlJson|tab", EditAnywhere, BlueprintReadWrite)
  bool visible;

  UPROPERTY(Category="JSON|OpenStageControlJson|tab", EditAnywhere, BlueprintReadWrite)
  bool interaction;

  UPROPERTY(Category="JSON|OpenStageControlJson|tab", EditAnywhere, BlueprintReadWrite)
  FString comments;

  UPROPERTY(Category="JSON|OpenStageControlJson|tab", EditAnywhere, BlueprintReadWrite)
  FString colorText;

  UPROPERTY(Category="JSON|OpenStageControlJson|tab", EditAnywhere, BlueprintReadWrite)
  FString colorWidget;

  UPROPERTY(Category="JSON|OpenStageControlJson|tab", EditAnywhere, BlueprintReadWrite)
  FString colorFill;

  UPROPERTY(Category="JSON|OpenStageControlJson|tab", EditAnywhere, BlueprintReadWrite)
  FString borderRadius;

  UPROPERTY(Category="JSON|OpenStageControlJson|tab", EditAnywhere, BlueprintReadWrite)
  FString padding;

  UPROPERTY(Category="JSON|OpenStageControlJson|tab", EditAnywhere, BlueprintReadWrite)
  FString html;

  UPROPERTY(Category="JSON|OpenStageControlJson|tab", EditAnywhere, BlueprintReadWrite)
  FString css;

  UPROPERTY(Category="JSON|OpenStageControlJson|tab", EditAnywhere, BlueprintReadWrite)
  FString colorBg;

  UPROPERTY(Category="JSON|OpenStageControlJson|tab", EditAnywhere, BlueprintReadWrite)
  FString layout;

  UPROPERTY(Category="JSON|OpenStageControlJson|tab", EditAnywhere, BlueprintReadWrite)
  FString justify;

  UPROPERTY(Category="JSON|OpenStageControlJson|tab", EditAnywhere, BlueprintReadWrite)
  FString gridTemplate;

  UPROPERTY(Category="JSON|OpenStageControlJson|tab", EditAnywhere, BlueprintReadWrite)
  bool contain;

  UPROPERTY(Category="JSON|OpenStageControlJson|tab", EditAnywhere, BlueprintReadWrite)
  bool scroll;

  UPROPERTY(Category="JSON|OpenStageControlJson|tab", EditAnywhere, BlueprintReadWrite)
  bool innerPadding;

  UPROPERTY(Category="JSON|OpenStageControlJson|tab", EditAnywhere, BlueprintReadWrite)
  FString tabsPosition;

  UPROPERTY(Category="JSON|OpenStageControlJson|tab", EditAnywhere, BlueprintReadWrite)
  FString label;

  UPROPERTY(Category="JSON|OpenStageControlJson|tab", EditAnywhere, BlueprintReadWrite)
  FString variables;

  UPROPERTY(Category="JSON|OpenStageControlJson|tab", EditAnywhere, BlueprintReadWrite)
  bool traversing;

  UPROPERTY(Category="JSON|OpenStageControlJson|tab", EditAnywhere, BlueprintReadWrite)
  FString value;

  UPROPERTY(Category="JSON|OpenStageControlJson|tab", EditAnywhere, BlueprintReadWrite)
  FString default__;

  UPROPERTY(Category="JSON|OpenStageControlJson|tab", EditAnywhere, BlueprintReadWrite)
  FString linkId;

  UPROPERTY(Category="JSON|OpenStageControlJson|tab", EditAnywhere, BlueprintReadWrite)
  FString address;

  UPROPERTY(Category="JSON|OpenStageControlJson|tab", EditAnywhere, BlueprintReadWrite)
  FString preArgs;

  UPROPERTY(Category="JSON|OpenStageControlJson|tab", EditAnywhere, BlueprintReadWrite)
  FString typeTags;

  UPROPERTY(Category="JSON|OpenStageControlJson|tab", EditAnywhere, BlueprintReadWrite)
  int32 decimals;

  UPROPERTY(Category="JSON|OpenStageControlJson|tab", EditAnywhere, BlueprintReadWrite)
  FString target;

  UPROPERTY(Category="JSON|OpenStageControlJson|tab", EditAnywhere, BlueprintReadWrite)
  bool ignoreDefaults;

  UPROPERTY(Category="JSON|OpenStageControlJson|tab", EditAnywhere, BlueprintReadWrite)
  bool bypass;

  UPROPERTY(Category="JSON|OpenStageControlJson|tab", EditAnywhere, BlueprintReadWrite)
  FString onCreate;

  UPROPERTY(Category="JSON|OpenStageControlJson|tab", EditAnywhere, BlueprintReadWrite)
  FString onValue;

  UPROPERTY(Category="JSON|OpenStageControlJson|tab", EditAnywhere, BlueprintReadWrite)
  FString onTouch;

  UPROPERTY(Category="JSON|OpenStageControlJson|tab", EditAnywhere, BlueprintReadWrite)
  TArray<FOpenStageControlJsonContentTabWidget> widgets;

  FOpenStageControlJsonContentTab() {};

  FOpenStageControlJsonContentTab( FString _type, bool _lock, FString _id, bool _visible, bool _interaction, FString _comments, FString _colorText, FString _colorWidget, FString _colorFill, FString _borderRadius, FString _padding, FString _html, FString _css, FString _colorBg, FString _layout, FString _justify, FString _gridTemplate, bool _contain, bool _scroll, bool _innerPadding, FString _tabsPosition, FString _label, FString _variables, bool _traversing, FString _value, FString _default, FString _linkId, FString _address, FString _preArgs, FString _typeTags, int32 _decimals, FString _target, bool _ignoreDefaults, bool _bypass, FString _onCreate, FString _onValue, FString _onTouch, TArray<FOpenStageControlJsonContentTabWidget> _widgets ){

    type = _type;
    lock = _lock;
    id = _id;
    visible = _visible;
    interaction = _interaction;
    comments = _comments;
    colorText = _colorText;
    colorWidget = _colorWidget;
    colorFill = _colorFill;
    borderRadius = _borderRadius;
    padding = _padding;
    html = _html;
    css = _css;
    colorBg = _colorBg;
    layout = _layout;
    justify = _justify;
    gridTemplate = _gridTemplate;
    contain = _contain;
    scroll = _scroll;
    innerPadding = _innerPadding;
    tabsPosition = _tabsPosition;
    label = _label;
    variables = _variables;
    traversing = _traversing;
    value = _value;
    default__ = _default;
    linkId = _linkId;
    address = _address;
    preArgs = _preArgs;
    typeTags = _typeTags;
    decimals = _decimals;
    target = _target;
    ignoreDefaults = _ignoreDefaults;
    bypass = _bypass;
    onCreate = _onCreate;
    onValue = _onValue;
    onTouch = _onTouch;
    widgets = _widgets;
  
  }
  
};

USTRUCT(Category="JSON|OpenStageControlJson", BlueprintType)
struct FOpenStageControlJsonContent
{

  GENERATED_BODY()

  UPROPERTY(Category="JSON|OpenStageControlJson|content", EditAnywhere, BlueprintReadWrite)
  FString type;

  UPROPERTY(Category="JSON|OpenStageControlJson|content", EditAnywhere, BlueprintReadWrite)
  bool lock;

  UPROPERTY(Category="JSON|OpenStageControlJson|content", EditAnywhere, BlueprintReadWrite)
  FString id;

  UPROPERTY(Category="JSON|OpenStageControlJson|content", EditAnywhere, BlueprintReadWrite)
  bool visible;

  UPROPERTY(Category="JSON|OpenStageControlJson|content", EditAnywhere, BlueprintReadWrite)
  bool interaction;

  UPROPERTY(Category="JSON|OpenStageControlJson|content", EditAnywhere, BlueprintReadWrite)
  FString comments;

  UPROPERTY(Category="JSON|OpenStageControlJson|content", EditAnywhere, BlueprintReadWrite)
  FString width;

  UPROPERTY(Category="JSON|OpenStageControlJson|content", EditAnywhere, BlueprintReadWrite)
  FString height;

  UPROPERTY(Category="JSON|OpenStageControlJson|content", EditAnywhere, BlueprintReadWrite)
  FString colorText;

  UPROPERTY(Category="JSON|OpenStageControlJson|content", EditAnywhere, BlueprintReadWrite)
  FString colorWidget;

  UPROPERTY(Category="JSON|OpenStageControlJson|content", EditAnywhere, BlueprintReadWrite)
  FString alphaFillOn;

  UPROPERTY(Category="JSON|OpenStageControlJson|content", EditAnywhere, BlueprintReadWrite)
  FString borderRadius;

  UPROPERTY(Category="JSON|OpenStageControlJson|content", EditAnywhere, BlueprintReadWrite)
  FString padding;

  UPROPERTY(Category="JSON|OpenStageControlJson|content", EditAnywhere, BlueprintReadWrite)
  FString html;

  UPROPERTY(Category="JSON|OpenStageControlJson|content", EditAnywhere, BlueprintReadWrite)
  FString css;

  UPROPERTY(Category="JSON|OpenStageControlJson|content", EditAnywhere, BlueprintReadWrite)
  FString colorBg;

  UPROPERTY(Category="JSON|OpenStageControlJson|content", EditAnywhere, BlueprintReadWrite)
  FString layout;

  UPROPERTY(Category="JSON|OpenStageControlJson|content", EditAnywhere, BlueprintReadWrite)
  FString justify;

  UPROPERTY(Category="JSON|OpenStageControlJson|content", EditAnywhere, BlueprintReadWrite)
  FString gridTemplate;

  UPROPERTY(Category="JSON|OpenStageControlJson|content", EditAnywhere, BlueprintReadWrite)
  bool contain;

  UPROPERTY(Category="JSON|OpenStageControlJson|content", EditAnywhere, BlueprintReadWrite)
  bool scroll;

  UPROPERTY(Category="JSON|OpenStageControlJson|content", EditAnywhere, BlueprintReadWrite)
  bool innerPadding;

  UPROPERTY(Category="JSON|OpenStageControlJson|content", EditAnywhere, BlueprintReadWrite)
  FString tabsPosition;

  UPROPERTY(Category="JSON|OpenStageControlJson|content", EditAnywhere, BlueprintReadWrite)
  bool hideMenu;

  UPROPERTY(Category="JSON|OpenStageControlJson|content", EditAnywhere, BlueprintReadWrite)
  FString variables;

  UPROPERTY(Category="JSON|OpenStageControlJson|content", EditAnywhere, BlueprintReadWrite)
  bool traversing;

  UPROPERTY(Category="JSON|OpenStageControlJson|content", EditAnywhere, BlueprintReadWrite)
  FString value;

  UPROPERTY(Category="JSON|OpenStageControlJson|content", EditAnywhere, BlueprintReadWrite)
  FString default__;

  UPROPERTY(Category="JSON|OpenStageControlJson|content", EditAnywhere, BlueprintReadWrite)
  FString linkId;

  UPROPERTY(Category="JSON|OpenStageControlJson|content", EditAnywhere, BlueprintReadWrite)
  FString address;

  UPROPERTY(Category="JSON|OpenStageControlJson|content", EditAnywhere, BlueprintReadWrite)
  FString preArgs;

  UPROPERTY(Category="JSON|OpenStageControlJson|content", EditAnywhere, BlueprintReadWrite)
  FString typeTags;

  UPROPERTY(Category="JSON|OpenStageControlJson|content", EditAnywhere, BlueprintReadWrite)
  int32 decimals;

  UPROPERTY(Category="JSON|OpenStageControlJson|content", EditAnywhere, BlueprintReadWrite)
  FString target;

  UPROPERTY(Category="JSON|OpenStageControlJson|content", EditAnywhere, BlueprintReadWrite)
  bool ignoreDefaults;

  UPROPERTY(Category="JSON|OpenStageControlJson|content", EditAnywhere, BlueprintReadWrite)
  bool bypass;

  UPROPERTY(Category="JSON|OpenStageControlJson|content", EditAnywhere, BlueprintReadWrite)
  FString onCreate;

  UPROPERTY(Category="JSON|OpenStageControlJson|content", EditAnywhere, BlueprintReadWrite)
  FString onValue;

  UPROPERTY(Category="JSON|OpenStageControlJson|content", EditAnywhere, BlueprintReadWrite)
  FString onTouch;

  UPROPERTY(Category="JSON|OpenStageControlJson|content", EditAnywhere, BlueprintReadWrite)
  FString onPreload;

  UPROPERTY(Category="JSON|OpenStageControlJson|content", EditAnywhere, BlueprintReadWrite)
  TArray<FOpenStageControlJsonContentTab> tabs;

  FOpenStageControlJsonContent() {};

  FOpenStageControlJsonContent( FString _type, bool _lock, FString _id, bool _visible, bool _interaction, FString _comments, FString _width, FString _height, FString _colorText, FString _colorWidget, FString _alphaFillOn, FString _borderRadius, FString _padding, FString _html, FString _css, FString _colorBg, FString _layout, FString _justify, FString _gridTemplate, bool _contain, bool _scroll, bool _innerPadding, FString _tabsPosition, bool _hideMenu, FString _variables, bool _traversing, FString _value, FString _default, FString _linkId, FString _address, FString _preArgs, FString _typeTags, int32 _decimals, FString _target, bool _ignoreDefaults, bool _bypass, FString _onCreate, FString _onValue, FString _onTouch, FString _onPreload, TArray<FOpenStageControlJsonContentTab> _tabs ){

    type = _type;
    lock = _lock;
    id = _id;
    visible = _visible;
    interaction = _interaction;
    comments = _comments;
    width = _width;
    height = _height;
    colorText = _colorText;
    colorWidget = _colorWidget;
    alphaFillOn = _alphaFillOn;
    borderRadius = _borderRadius;
    padding = _padding;
    html = _html;
    css = _css;
    colorBg = _colorBg;
    layout = _layout;
    justify = _justify;
    gridTemplate = _gridTemplate;
    contain = _contain;
    scroll = _scroll;
    innerPadding = _innerPadding;
    tabsPosition = _tabsPosition;
    hideMenu = _hideMenu;
    variables = _variables;
    traversing = _traversing;
    value = _value;
    default__ = _default;
    linkId = _linkId;
    address = _address;
    preArgs = _preArgs;
    typeTags = _typeTags;
    decimals = _decimals;
    target = _target;
    ignoreDefaults = _ignoreDefaults;
    bypass = _bypass;
    onCreate = _onCreate;
    onValue = _onValue;
    onTouch = _onTouch;
    onPreload = _onPreload;
    tabs = _tabs;
  
  }
  
};

USTRUCT(Category="JSON|OpenStageControlJson", BlueprintType)
struct FOpenStageControlJson
{

  GENERATED_BODY()

  UPROPERTY(Category="JSON|OpenStageControlJson", EditAnywhere, BlueprintReadWrite)
  FString createdWith;

  UPROPERTY(Category="JSON|OpenStageControlJson", EditAnywhere, BlueprintReadWrite)
  FString version;

  UPROPERTY(Category="JSON|OpenStageControlJson", EditAnywhere, BlueprintReadWrite)
  FString type;

  UPROPERTY(Category="JSON|OpenStageControlJson", EditAnywhere, BlueprintReadWrite)
  FOpenStageControlJsonContent content;

  FOpenStageControlJson() {};

  FOpenStageControlJson( FString _createdWith, FString _version, FString _type, FOpenStageControlJsonContent _content ){

    createdWith = _createdWith;
    version = _version;
    type = _type;
    content = _content;
  
  }
  
  /* Don't Forget to setup your project
  Add #include "Runtime/JsonUtilities/Public/JsonObjectConverter.h" in 
  file with this structs.
  Also you need add "Json", "JsonUtilities" in Build.cs */

  FOpenStageControlJson(FString _json_){
    FOpenStageControlJson _tmpOpenStageControlJson;
    
		FJsonObjectConverter::JsonObjectStringToUStruct<FOpenStageControlJson>(
		_json_,
		&_tmpOpenStageControlJson,
    0, 0);
    
    createdWith = _tmpOpenStageControlJson.createdWith;
    version = _tmpOpenStageControlJson.version;
    type = _tmpOpenStageControlJson.type;
    content = _tmpOpenStageControlJson.content;
  }
  
};
