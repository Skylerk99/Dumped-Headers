/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:49:07 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/_UITouchPhaseChangeDelegate.h>

@class AFDictationConnection, AFDictationOptions, AFPreferences, NSArray, NSTimer, UIAlertView, UIDictationStreamingOperations, NSString, CADisplayLink, NSMutableArray, UIWindow, _UIDictationPrivacySheetController, UIKeyboardInputMode;

@interface UIDictationController : NSObject <_UITouchPhaseChangeDelegate> {

	AFDictationConnection* _connection;
	AFDictationOptions* _options;
	AFPreferences* _preferences;
	NSArray* _availableLanguages;
	NSTimer* _recordingLimitTimer;
	void* _callCenterFrameworkFileHandle;
	id _callCenter;
	void* _facetimeCallFrameworkFileHandle;
	id _facetimeCallManager;
	BOOL _wasDisabledDueToTelephonyActivity;
	UIAlertView* _dictationAvailableSoonAlert;
	BOOL _connectionWasAlreadyAliveForStatisticsLogging;
	UIDictationStreamingOperations* _streamingOperations;
	NSString* _language;
	BOOL _recievingResults;
	BOOL _streamingAnimationActive;
	double _lastAnimationUpdateTimeStamp;
	/*^block*/id _finalResultsOperation;
	CADisplayLink* _streamingAnimationDisplayLink;
	BOOL cancelledByWaitingForLocalResults;
	long long _updatingDocument;
	BOOL _deferredCancellationRequested;
	BOOL dictationStartedFromGesture;
	BOOL _performingStreamingEditingOperation;
	BOOL _discardNextHypothesis;
	BOOL _hasPreheated;
	BOOL _wantsAvailabilityMonitoringWhenAppActive;
	NSMutableArray* _pendingEdits;
	NSString* _previousHypothesis;
	NSString* _lastHypothesis;
	NSString* _targetHypothesis;
	UIWindow* _dictationPresenterWindow;
	_UIDictationPrivacySheetController* _dictationPrivacySheetController;
	UIKeyboardInputMode* _inputModeThatInvokedDictation;
	NSRange _insertionRange;

}

@property (nonatomic,retain) NSMutableArray * pendingEdits;                                                     //@synthesize pendingEdits=_pendingEdits - In the implementation block
@property (assign,nonatomic) BOOL performingStreamingEditingOperation;                                          //@synthesize performingStreamingEditingOperation=_performingStreamingEditingOperation - In the implementation block
@property (nonatomic,copy) NSString * previousHypothesis;                                                       //@synthesize previousHypothesis=_previousHypothesis - In the implementation block
@property (nonatomic,copy) NSString * lastHypothesis;                                                           //@synthesize lastHypothesis=_lastHypothesis - In the implementation block
@property (nonatomic,copy) NSString * targetHypothesis;                                                         //@synthesize targetHypothesis=_targetHypothesis - In the implementation block
@property (assign,nonatomic) BOOL discardNextHypothesis;                                                        //@synthesize discardNextHypothesis=_discardNextHypothesis - In the implementation block
@property (assign,nonatomic) NSRange insertionRange;                                                            //@synthesize insertionRange=_insertionRange - In the implementation block
@property (assign,nonatomic) BOOL hasPreheated;                                                                 //@synthesize hasPreheated=_hasPreheated - In the implementation block
@property (nonatomic,retain) UIWindow * dictationPresenterWindow;                                               //@synthesize dictationPresenterWindow=_dictationPresenterWindow - In the implementation block
@property (nonatomic,retain) _UIDictationPrivacySheetController * dictationPrivacySheetController;              //@synthesize dictationPrivacySheetController=_dictationPrivacySheetController - In the implementation block
@property (assign,nonatomic) BOOL dictationStartedFromGesture; 
@property (nonatomic,retain) UIKeyboardInputMode * inputModeThatInvokedDictation;                               //@synthesize inputModeThatInvokedDictation=_inputModeThatInvokedDictation - In the implementation block
@property (assign,nonatomic) BOOL wantsAvailabilityMonitoringWhenAppActive;                                     //@synthesize wantsAvailabilityMonitoringWhenAppActive=_wantsAvailabilityMonitoringWhenAppActive - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
+(id)activeInstance;
+(id)serializedDictationPhrases:(id)arg1 ;
+(id)metadataDictionaryForCorrectionIdentifier:(id)arg1 ;
+(id)bestInterpretationForDictationResult:(id)arg1 ;
+(void)keyboardDidSetInputMode;
+(void)keyboardWillChangeFromDelegate:(id)arg1 toDelegate:(id)arg2 ;
+(BOOL)shouldDeleteBackwardInInputDelegate:(id)arg1 ;
+(BOOL)shouldInsertText:(id)arg1 inInputDelegate:(id)arg2 ;
+(id)singleLineResultForResult:(id)arg1 ;
+(BOOL)fetchCurrentInputModeSupportsDictation;
+(id)stringForState:(int)arg1 ;
+(BOOL)dictationIsFunctional;
+(BOOL)isRunning;
+(int)viewMode;
+(BOOL)usingServerManualEndpointingThreshold;
+(double)serverManualEndpointingThreshold;
+(void)didOneFingerTapInTextView:(id)arg1 ;
+(BOOL)shouldHideCursorForTextView:(id)arg1 ;
+(void)updateLandingView;
+(BOOL)shouldHideSelectionUIForTextView:(id)arg1 ;
+(void)keyboardDidUpdateOnScreenStatus;
+(void)poppedLastStreamingOperation;
+(BOOL)openAssistantFrameworkIfNecessary;
+(BOOL)setupForOpeningConnections;
+(BOOL)setupForPhraseSerialization;
+(void)applicationDidChangeStatusBarFrame;
+(void)applicationDidBecomeActive;
+(void)applicationWillResignActive;
+(void)applicationDidEnterBackgroundNotification;
+(void)siriPreferencesChanged;
+(id)serializedInterpretationFromTokens:(id)arg1 transform:(CFStringRef)arg2 ranges:(id*)arg3 ;
+(id)serializedInterpretationFromTokens:(id)arg1 transform:(CFStringRef)arg2 ;
+(BOOL)shouldEnableGestureHandler;
+(void)disableGestureHandler;
+(id)activeConnection;
+(void)enableGestureHandlerIfNecessary;
+(void)logCorrectionStatisticsForDelegate:(id)arg1 ;
+(BOOL)isTextViewOnStarkScreen:(id)arg1 ;
+(BOOL)usingTypeAndTalk;
+(id)serializedInterpretationFromTokens:(id)arg1 transform:(CFStringRef)arg2 ranges:(id*)arg3 options:(id)arg4 ;
+(id)serializedDictationPhrasesFromTokenMatrix:(id)arg1 fromKeyboard:(BOOL)arg2 transform:(CFStringRef)arg3 ;
+(id)interpretation:(id)arg1 forPhraseIndex:(unsigned long long)arg2 isShiftLocked:(BOOL)arg3 autocapitalizationType:(long long)arg4 ;
+(id)serializedDictationPhrases:(id)arg1 fromKeyboard:(BOOL)arg2 transform:(CFStringRef)arg3 ;
+(BOOL)starkScreenExists;
+(id)streamingHypothesisForPhrases:(id)arg1 ;
+(id)serializedInterpretationFromTokens:(id)arg1 transform:(CFStringRef)arg2 fromKeyboard:(BOOL)arg3 options:(id)arg4 ;
+(BOOL)takesPressesBegan:(id)arg1 forTextView:(id)arg2 ;
+(BOOL)takesPressesChanged:(id)arg1 forTextView:(id)arg2 ;
+(BOOL)takesPressesEnded:(id)arg1 forTextView:(id)arg2 ;
+(id)attributedStringForDictationResult:(id)arg1 andCorrectionIdentifier:(id)arg2 ;
+(void)didBeginEditingInTextView:(id)arg1 ;
+(void)logDictationString:(id)arg1 ;
+(id)stringForViewMode:(int)arg1 ;
-(void)dealloc;
-(id)init;
-(int)state;
-(void)setState:(int)arg1 ;
-(void)proximityStateChanged:(id)arg1 ;
-(UIKeyboardInputMode *)inputModeThatInvokedDictation;
-(BOOL)dictationIsModifyingText;
-(void)cancelDictation;
-(void)_touchPhaseChangedForTouch:(id)arg1 ;
-(void)switchToDictationInputModeWithTouch:(id)arg1 ;
-(void)stopDictation;
-(void)startDictation;
-(id)connection;
-(id)_connection;
-(BOOL)supportsInputMode:(id)arg1 error:(id*)arg2 ;
-(void)startDictationForFileAtURL:(id)arg1 forInputModeIdentifier:(id)arg2 ;
-(void)startConnectionForFileAtURL:(id)arg1 forInputModeIdentifier:(id)arg2 ;
-(void)setInputModeThatInvokedDictation:(UIKeyboardInputMode *)arg1 ;
-(void)setPerformingStreamingEditingOperation:(BOOL)arg1 ;
-(void)delayedTelephonyCheckingSetup;
-(BOOL)disabledDueToTelephonyActivity;
-(id)language;
-(BOOL)dictationEnabled;
-(id)assistantCompatibleLanguageCodeForInputMode:(id)arg1 ;
-(id)connectionForStatisticsLogging;
-(void)releaseConnectionAfterStatisticsLogging;
-(void)disableAutorotation;
-(void)reenableAutorotation;
-(BOOL)dictationStartedFromGesture;
-(void)startDictationForReason:(long long)arg1 ;
-(void)setDictationStartedFromGesture:(BOOL)arg1 ;
-(void)setDictationInputmode;
-(void)enableProximity;
-(id)streamingOperations;
-(void)setWantsAvailabilityMonitoringWhenAppActive:(BOOL)arg1 ;
-(void)releaseConnection;
-(void)_endEnableDictationPromptAnimated:(BOOL)arg1 ;
-(BOOL)performingStreamingEditingOperation;
-(void)_restartDictation;
-(void)setDiscardNextHypothesis:(BOOL)arg1 ;
-(BOOL)_shouldDeleteBackwardInInputDelegate:(id)arg1 ;
-(BOOL)_shouldInsertText:(id)arg1 inInputDelegate:(id)arg2 ;
-(BOOL)wantsAvailabilityMonitoringWhenAppActive;
-(BOOL)wasDisabledDueToTelephonyActivity;
-(id)supportedDictationLanguages:(/*^block*/id)arg1 ;
-(id)fieldIdentifierInputDelegate:(id)arg1 ;
-(id)prefixTextForInputDelegate:(id)arg1 ;
-(id)postfixTextForInputDelegate:(id)arg1 ;
-(id)selectedTextForInputDelegate:(id)arg1 ;
-(void)setupConnectionOptions;
-(void)setupForDictationStartForReason:(long long)arg1 ;
-(void)completeStartConnectionForReason:(long long)arg1 ;
-(void)completeStartConnectionForFileAtURL:(id)arg1 forInputModeIdentifier:(id)arg2 ;
-(void)performIgnoringDocumentChanges:(/*^block*/id)arg1 ;
-(void)_stopStreamingAnimation;
-(void)setPendingEdits:(NSMutableArray *)arg1 ;
-(void)setLastHypothesis:(NSString *)arg1 ;
-(void)setTargetHypothesis:(NSString *)arg1 ;
-(void)endSessionIfNecessaryForTransitionFromState:(int)arg1 toState:(int)arg2 ;
-(void)_runFinalizeOperation;
-(void)releaseConnectionAfterDictationRequest;
-(BOOL)isRecievingResults;
-(void)setDictationPresenterWindow:(UIWindow *)arg1 ;
-(void)setDictationPrivacySheetController:(_UIDictationPrivacySheetController *)arg1 ;
-(void)cancelRecordingLimitTimer;
-(void)setPreviousHypothesis:(NSString *)arg1 ;
-(void)setInsertionRange:(NSRange)arg1 ;
-(id)languageCodeForAssistantLanguageCode:(id)arg1 ;
-(void)setLanguage:(id)arg1 ;
-(void)startRecordingLimitTimer;
-(void)setupForStreamingDictationStart;
-(void)startConnectionForReason:(long long)arg1 ;
-(void)_beginEnableDictationPrompt;
-(UIWindow *)dictationPresenterWindow;
-(void)_presentOptInAlert;
-(_UIDictationPrivacySheetController *)dictationPrivacySheetController;
-(void)switchToDictationInputMode;
-(void)_presentPrivacySheet;
-(BOOL)isIgnoringDocumentChanges;
-(NSString *)lastHypothesis;
-(NSString *)targetHypothesis;
-(id)_hypothesisRangeFromSelectionRange:(id)arg1 inputDelegate:(id)arg2 ;
-(id)_rangeByExtendingRange:(id)arg1 backward:(long long)arg2 forward:(long long)arg3 inputDelegate:(id)arg4 ;
-(void)_updateFromSelectedTextRange:(id)arg1 withNewHypothesis:(id)arg2 ;
-(void)insertSerializedDictationResult:(id)arg1 withCorrectionIdentifier:(id)arg2 ;
-(void)_setFinalResultHandler:(/*^block*/id)arg1 ;
-(void)_startStreamingAnimations;
-(id)dictationPhraseArrayFromDictationResult:(id)arg1 ;
-(BOOL)needsTrailingSpaceForPhrases:(id)arg1 ;
-(BOOL)needsLeadingSpaceForPhrases:(id)arg1 ;
-(CFStringRef)resultTransformForLanguageModel:(id)arg1 ;
-(id)resultWithTrailingSpace:(id)arg1 ;
-(void)finishDictationRecognitionWithPhrases:(id)arg1 languageModel:(id)arg2 correctionIdentifier:(id)arg3 ;
-(void)_displayLinkFired:(id)arg1 ;
-(NSMutableArray *)pendingEdits;
-(id)_getBestHypothesisRangeGivenHintRange:(id)arg1 inputDelegate:(id)arg2 hypothesisRange:(NSRange*)arg3 documentTextInRange:(id*)arg4 ;
-(BOOL)discardNextHypothesis;
-(NSString *)previousHypothesis;
-(void)setupToInsertResultForNewHypothesis:(id)arg1 ;
-(BOOL)hasPreheated;
-(void)setHasPreheated:(BOOL)arg1 ;
-(float)audioLevel;
-(void)errorAnimationDidFinish;
-(void)dismissDictationView:(id)arg1 ;
-(void)cancelDictationForTextStoreChangesInResponder:(id)arg1 ;
-(void)restartDictationForTypeAndTalk;
-(void)dictationConnection:(id)arg1 didRecognizePhrases:(id)arg2 languageModel:(id)arg3 correctionIdentifier:(id)arg4 ;
-(void)dictationConnection:(id)arg1 didHypothesizePhrases:(id)arg2 languageModel:(id)arg3 ;
-(void)dictationConnection:(id)arg1 didRecognizeTokens:(id)arg2 languageModel:(id)arg3 ;
-(void)dictationConnectionSpeechRecordingWillBegin:(id)arg1 ;
-(void)dictationConnectionSpeechRecordingDidBegin:(id)arg1 ;
-(void)dictationConnectionSpeechRecordingDidEnd:(id)arg1 ;
-(void)dictationConnectionSpeechRecordingDidCancel:(id)arg1 ;
-(void)dictationConnection:(id)arg1 speechRecordingDidFail:(id)arg2 ;
-(void)dictationConnection:(id)arg1 speechRecognitionDidFail:(id)arg2 ;
-(void)dictationConnnectionDidChangeAvailability:(id)arg1 ;
-(void)preheatIfNecessary;
-(NSRange)insertionRange;
@end

