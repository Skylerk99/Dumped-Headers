/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:48:05 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/MessageUI.framework/MessageUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol ABPredicateDelegate <NSObject>
@optional
-(BOOL)predicateShouldContinue:(id)arg1 afterFindingRecord:(void*)arg2 metadata:(id)arg3;
-(BOOL)predicateShouldContinue:(id)arg1 afterFindingRecord:(void*)arg2 moreComing:(BOOL)arg3;
-(BOOL)predicateShouldContinue:(id)arg1 afterFindingRecord:(void*)arg2 metadata:(id)arg3 moreComing:(BOOL)arg4;

@required
-(BOOL)predicateShouldContinue:(id)arg1;
-(BOOL)predicateShouldContinue:(id)arg1 afterFindingRecord:(void*)arg2;

@end

