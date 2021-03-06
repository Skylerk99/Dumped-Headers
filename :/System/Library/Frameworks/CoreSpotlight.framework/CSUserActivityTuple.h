/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:47:25 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/CoreSpotlight.framework/CoreSpotlight
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/CSIndexQueuableItem.h>

@class CSUserAction, CSSearchableItem, NSString;

@interface CSUserActivityTuple : NSObject <CSIndexQueuableItem> {

	CSUserAction* _action;
	CSSearchableItem* _item;
	NSString* _protectionClass;

}

@property (retain) CSUserAction * action;                     //@synthesize action=_action - In the implementation block
@property (retain) CSSearchableItem * item;                   //@synthesize item=_item - In the implementation block
@property (readonly) NSString * protectionClass;              //@synthesize protectionClass=_protectionClass - In the implementation block
-(id)initWithAction:(id)arg1 item:(id)arg2 protectionClass:(id)arg3 ;
-(id)searchableItem;
-(CSSearchableItem *)item;
-(CSUserAction *)action;
-(void)setAction:(CSUserAction *)arg1 ;
-(void)setItem:(CSSearchableItem *)arg1 ;
-(NSString *)protectionClass;
@end

