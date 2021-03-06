/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:52:49 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/IMFoundation.framework/IMFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface IMDoubleLinkedListNode : NSObject {

	IMDoubleLinkedListNode* _prev;
	IMDoubleLinkedListNode* _next;
	id _dataValue;

}

@property (retain) IMDoubleLinkedListNode * prev;              //@synthesize prev=_prev - In the implementation block
@property (retain) IMDoubleLinkedListNode * next;              //@synthesize next=_next - In the implementation block
@property (retain) id dataValue;                               //@synthesize dataValue=_dataValue - In the implementation block
-(IMDoubleLinkedListNode *)next;
-(void)setPrev:(IMDoubleLinkedListNode *)arg1 ;
-(id)dataValue;
-(void)setNext:(IMDoubleLinkedListNode *)arg1 ;
-(IMDoubleLinkedListNode *)prev;
-(void)setDataValue:(id)arg1 ;
@end

