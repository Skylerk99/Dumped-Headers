/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:46:25 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class CAContext;

@interface SBSnapshotSlotIdWrapper : NSObject {

	unsigned _slotId;
	CAContext* _context;

}

@property (nonatomic,readonly) unsigned slotId;                         //@synthesize slotId=_slotId - In the implementation block
@property (nonatomic,retain,readonly) CAContext * context;              //@synthesize context=_context - In the implementation block
-(id)initWithContext:(id)arg1 slotId:(unsigned)arg2 ;
-(unsigned)slotId;
-(void)dealloc;
-(id)init;
-(CAContext *)context;
@end

