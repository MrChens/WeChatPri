//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMWebViewPluginBase.h"

#import "BaseEmoticonViewDelegate-Protocol.h"
#import "EmoticonBoardViewDelegate-Protocol.h"
#import "InputControllerDelegate-Protocol.h"

@class EmoticonBoardView, NSString, UIButton, UIImageView, WCInputController;

@interface MMWebViewPlugin_InputKeyboard : MMWebViewPluginBase <EmoticonBoardViewDelegate, BaseEmoticonViewDelegate, InputControllerDelegate>
{
    CDUnknownBlockType _inputTextCallbackBlock;
    unsigned long long _maxInputLen;
    WCInputController *_inputController;
    UIImageView *_inputView;
    EmoticonBoardView *_emoticonBoardView;
    UIButton *_expressionButton;
    NSString *_finishText;
    _Bool _bIsAlreadySendEvent;
    _Bool _bIsShowJSKeyBoard;
    _Bool _bOnlyShowSmileyPanel;
    double _smileyPanelDuration;
}

@property(nonatomic) _Bool m_bIsShowJSKeyBoard; // @synthesize m_bIsShowJSKeyBoard=_bIsShowJSKeyBoard;
- (void).cxx_destruct;
- (void)sendEmotionTextToJs:(id)arg1;
- (void)hideEmotionBoardAnimate;
- (void)deleteEmoticon;
- (void)didSelectorSelfDefinedEmotcion:(id)arg1;
- (void)didSelectorEmoticon:(id)arg1;
- (void)OnEmoticonStateDidChanged:(_Bool)arg1;
- (void)onSendButtonClicked;
- (void)keyboardDidHide;
- (void)callBackToJs;
- (void)onHideKeyboard;
- (void)didCommitText:(id)arg1;
- (void)MMGrowTextViewHeightDidChanged:(id)arg1;
- (double)getVisibleHeight;
- (void)reloadExpressionButtonImage:(int)arg1;
- (void)initEmoticonView;
- (void)initInputToolView;
- (void)onExpressionButtonClicked:(id)arg1;
- (void)ensureInitInputView;
- (void)showEmotionBoardAnimate;
- (void)showInputViewWithPlaceholder:(id)arg1 defaultText:(id)arg2 contentOffsetY:(double)arg3;
- (_Bool)showEmotionBoardOnly:(double)arg1 ToShow:(_Bool)arg2 EmotionBoardHeight:(double *)arg3;
- (void)showKeyBoardWithPlaceholder:(id)arg1 defaultText:(id)arg2 maxTextLen:(unsigned long long)arg3 contentOffsetY:(double)arg4 callBackBlock:(CDUnknownBlockType)arg5;
- (void)resignResponder;
- (_Bool)handleEvent:(unsigned long long)arg1 userInfo:(id)arg2;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

