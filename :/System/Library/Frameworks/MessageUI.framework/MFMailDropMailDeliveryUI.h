/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:48:05 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/MessageUI.framework/MessageUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Message/MFMailDropMailDelivery.h>

@interface MFMailDropMailDeliveryUI : MFMailDropMailDelivery
-(void)regenerateMessageParts:(id)arg1 htmlBody:(id*)arg2 plainTextAlternative:(id*)arg3 otherHTMLAndAttachments:(id*)arg4 charsets:(id*)arg5 ;
-(id)_updatedHeadersWithAttachments;
-(void)recreateMessageWithHTMLDocument:(id)arg1 plainDocument:(id)arg2 otherDocuments:(id)arg3 charSets:(id)arg4 ;
-(void)_convertToMailDropAttachmentFromAttachmentNode:(id)arg1 forDocument:(id)arg2 ;
-(void)_addBannerToDocument:(id)arg1 ;
-(BOOL)scaleImages:(id)arg1 ;
-(BOOL)updateMessageWithAttachmentsSynchronously;
@end

