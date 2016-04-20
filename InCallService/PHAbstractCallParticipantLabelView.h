//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "PHMarqueeViewDelegate.h"

@class NSString, PHCallParticipantLabelDescriptor, PHMarqueeView;

@interface PHAbstractCallParticipantLabelView : UIView <PHMarqueeViewDelegate>
{
    _Bool _hidesLabel;
    _Bool _showsInfoButton;
    _Bool _enabled;
    _Bool _shouldCompressLabelsVertically;
    _Bool _initialMarqueeViewScrollCompleted;
    unsigned short _activityState;
    PHMarqueeView *_participantMarqueeLabel;
    PHCallParticipantLabelDescriptor *_labelDescriptor;
    NSString *_participantName;
    id <PHCallParticipantLabelDelegate> _delegate;
}

@property _Bool initialMarqueeViewScrollCompleted; // @synthesize initialMarqueeViewScrollCompleted=_initialMarqueeViewScrollCompleted;
@property __weak id <PHCallParticipantLabelDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) unsigned short activityState; // @synthesize activityState=_activityState;
@property(nonatomic) _Bool shouldCompressLabelsVertically; // @synthesize shouldCompressLabelsVertically=_shouldCompressLabelsVertically;
@property(nonatomic) _Bool enabled; // @synthesize enabled=_enabled;
@property(copy, nonatomic) NSString *participantName; // @synthesize participantName=_participantName;
@property(nonatomic) _Bool showsInfoButton; // @synthesize showsInfoButton=_showsInfoButton;
@property(nonatomic) _Bool hidesLabel; // @synthesize hidesLabel=_hidesLabel;
@property(copy, nonatomic) PHCallParticipantLabelDescriptor *labelDescriptor; // @synthesize labelDescriptor=_labelDescriptor;
@property(retain) PHMarqueeView *participantMarqueeLabel; // @synthesize participantMarqueeLabel=_participantMarqueeLabel;
- (void).cxx_destruct;
- (void)fadeParticipantMarqueeLabelToText:(id)arg1;
- (void)marqueeViewDidFinishScrolling:(id)arg1;
- (double)labelAlphaValueForActivityState:(unsigned short)arg1;
- (void)setActivityState:(unsigned short)arg1 animated:(_Bool)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
