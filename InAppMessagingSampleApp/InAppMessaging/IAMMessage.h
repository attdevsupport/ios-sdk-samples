// Copyright (c) 2013 AT&T (htpp://developer.att.com)
// 
// Permission is hereby granted, free of charge, to any person obtaining a copy
// of this software and associated documentation files (the "Software"), to deal
// in the Software without restriction, including without limitation the rights
// to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
// copies of the Software, and to permit persons to whom the Software is
// furnished to do so, subject to the following conditions:
// 
// The above copyright notice and this permission notice shall be included in
// all copies or substantial portions of the Software.
// 
// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
// IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
// FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
// AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
// LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
// OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
// THE SOFTWARE.


// Defines the types of messages that can be filtered while
// requesting a IAMMessage resource.
typedef enum IAMMessageType{
    MTSMS,
    MTMMS,
    MTTEXT
} IAMMessageType;


#import <Foundation/Foundation.h>

@class TypeMetaData;

@interface IAMMessage : NSObject

@property (nonatomic, copy) NSString* messageId;
@property (nonatomic, copy) NSString* from;
@property (nonatomic, retain) NSArray* recipients;
@property (nonatomic, retain) NSDate* date;
@property (nonatomic, copy) NSString* text;
@property (nonatomic) BOOL favorite;
@property (nonatomic) BOOL unread;
@property (nonatomic) IAMMessageType type;

// message details like: segmentation and subject
@property (nonatomic, retain) TypeMetaData* typeMetaData;
@property (nonatomic) BOOL incoming;

// Multi-media content, for managing attachments, e.g., images & audio.
@property (nonatomic) NSArray* mmsContent;

+(NSString*)formatMessageType:(IAMMessageType)type;

@end
