/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:46:22 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class UIView;

@interface SBViewSnapshotProvider : NSObject {

	UIView* _view;
	/*^block*/id _completionBlock;

}

@property (nonatomic,copy) id completionBlock;              //@synthesize completionBlock=_completionBlock - In the implementation block
-(void)snapshotAsynchronously:(BOOL)arg1 withImageBlock:(/*^block*/id)arg2 ;
-(void)snapshotWithImageBlock:(/*^block*/id)arg1 ;
-(void)dealloc;
-(id)completionBlock;
-(void)setCompletionBlock:(id)arg1 ;
-(id)snapshot;
-(id)initWithView:(id)arg1 ;
@end

