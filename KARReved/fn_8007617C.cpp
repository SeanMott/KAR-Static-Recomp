//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_800628A0.hpp"
#include "fn_80062978.hpp"
#include "fn_800629AC.hpp"
#include "fn_80062A68.hpp"
#include "fn_80078CF0.hpp"
#include "fn_80006354.hpp"
#include "fn_8007854C.hpp"
#include "fn_SomehowRelatedToTheCSSColorChangingButIsCalledOtherPlaces.hpp"
#include "fn_8007CCC4.hpp"
#include "fn_8007B69C.hpp"
#include "fn_8007B820.hpp"
#include "fn_8007634C.hpp"
#include "fn_80076504.hpp"
#include "fn_80076548.hpp"
#include "fn_80076504.hpp"
#include "fn_8007666C.hpp"



void fn_8007617C(PPC::Runtime::GCContext* context)
{
/*8007617C 00072F7C*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x20, context->r1));
/*80076180 00072F80*/ PPC::Runtime::ASM::mflr(context->r0);
/*80076184 00072F84*/ PPC::Runtime::ASM::lis(context->r3, STRUCT_BYTE4_COUNT_180552338 @ Get_MemoryOffset_HighBit);
/*80076188 00072F88*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*8007618C 00072F8C*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*80076190 00072F90*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*80076194 00072F94*/ PPC::Runtime::ASM::addi(context->r30, context->r3, STRUCT_BYTE4_COUNT_180552338 @ Get_MemoryOffset_LowBit);
/*80076198 00072F98*/ PPC::Runtime::ASM::stw(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8007619C 00072F9C*/ PPC::Runtime::ASM::bl(fn_800628A0);
/* 800761A0 00072FA0  54 7F 06 3F */ clrlwi. context->r31 , context->r3 , 24
/*800761A4 00072FA4*/ PPC::Runtime::ASM::beq(.L_80076228);
/*800761A8 00072FA8*/ PPC::Runtime::ASM::li(context->r29, 0x0);
/*800761AC 00072FAC*/ PPC::Runtime::ASM::b(.L_80076220);
RUNTIME_PPC_JUMP_LABEL(.L_800761B0, 0x800761B0) //this is a jump label
/*800761B0 00072FB0*/ PPC::Runtime::ASM::bl(fn_80062978);
/*800761B4 00072FB4*/ PPC::Runtime::ASM::bl(fn_800629AC);
/*800761B8 00072FB8*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*800761BC 00072FBC*/ PPC::Runtime::ASM::bl(fn_80062A68);
/*800761C0 00072FC0*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*800761C4 00072FC4*/ PPC::Runtime::ASM::beq(.L_8007621C);
/*800761C8 00072FC8*/ PPC::Runtime::ASM::bl(fn_80411D24);
/*800761CC 00072FCC*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*800761D0 00072FD0*/ PPC::Runtime::ASM::beq(.L_8007621C);
/*800761D4 00072FD4*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r30));
/*800761D8 00072FD8*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x4);
/*800761DC 00072FDC*/ PPC::Runtime::ASM::beq(.L_8007621C);
/*800761E0 00072FE0*/ PPC::Runtime::ASM::bl(fn_80078CF0);
/*800761E4 00072FE4*/ PPC::Runtime::ASM::bl(fn_80414058);
/*800761E8 00072FE8*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*800761EC 00072FEC*/ PPC::Runtime::ASM::bl(fn_VISetPreRetraceCallback);
/*800761F0 00072FF0*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*800761F4 00072FF4*/ PPC::Runtime::ASM::bl(fn_VISetPostRetraceCallback);
/*800761F8 00072FF8*/ PPC::Runtime::ASM::li(context->r3, 0x1);
/*800761FC 00072FFC*/ PPC::Runtime::ASM::bl(fn_VISetBlack);
/*80076200 00073000*/ PPC::Runtime::ASM::bl(fn_VIFlush);
/*80076204 00073004*/ PPC::Runtime::ASM::bl(fn_VIWaitForRetrace);
/*80076208 00073008*/ PPC::Runtime::ASM::bl(fn_VIWaitForRetrace);
/*8007620C 0007300C*/ PPC::Runtime::ASM::li(context->r3, 0x1);
/*80076210 00073010*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*80076214 00073014*/ PPC::Runtime::ASM::li(context->r5, 0x0);
/*80076218 00073018*/ PPC::Runtime::ASM::bl(OSResetSystem);
RUNTIME_PPC_JUMP_LABEL(.L_8007621C, 0x8007621C) //this is a jump label
/*8007621C 0007301C*/ PPC::Runtime::ASM::addi(context->r29, context->r29, 0x1);
RUNTIME_PPC_JUMP_LABEL(.L_80076220, 0x80076220) //this is a jump label
/*80076220 00073020*/ PPC::Runtime::ASM::cmpw(context->r29, context->r31);
/*80076224 00073024*/ PPC::Runtime::ASM::blt(.L_800761B0);
RUNTIME_PPC_JUMP_LABEL(.L_80076228, 0x80076228) //this is a jump label
/*80076228 00073028*/ PPC::Runtime::ASM::lis(context->r3, STRUCT_BYTE4_COUNT_180552338 @ Get_MemoryOffset_HighBit);
/*8007622C 0007302C*/ PPC::Runtime::ASM::addi(context->r31, context->r3, STRUCT_BYTE4_COUNT_180552338 @ Get_MemoryOffset_LowBit);
/*80076230 00073030*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r31));
/*80076234 00073034*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x1);
/*80076238 00073038*/ PPC::Runtime::ASM::beq(.L_800762B8);
/*8007623C 0007303C*/ PPC::Runtime::ASM::bge(.L_80076250);
/*80076240 00073040*/ PPC::Runtime::ASM::cmpwi(context->r0, -0x1);
/*80076244 00073044*/ PPC::Runtime::ASM::beq(.L_80076314);
/*80076248 00073048*/ PPC::Runtime::ASM::bge(.L_8007625C);
/*8007624C 0007304C*/ PPC::Runtime::ASM::b(.L_8007632C);
RUNTIME_PPC_JUMP_LABEL(.L_80076250, 0x80076250) //this is a jump label
/*80076250 00073050*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x3);
/*80076254 00073054*/ PPC::Runtime::ASM::bge(.L_8007632C);
/*80076258 00073058*/ PPC::Runtime::ASM::b(.L_800762DC);
RUNTIME_PPC_JUMP_LABEL(.L_8007625C, 0x8007625C) //this is a jump label
/*8007625C 0007305C*/ PPC::Runtime::ASM::li(context->r3, 0x1);
/*80076260 00073060*/ PPC::Runtime::ASM::bl(fn_80006354);
/*80076264 00073064*/ PPC::Runtime::ASM::lis(context->r3, STRUCT_BYTE4_COUNT_180552338 @ Get_MemoryOffset_HighBit);
/*80076268 00073068*/ PPC::Runtime::ASM::addi(context->r3, context->r3, STRUCT_BYTE4_COUNT_180552338 @ Get_MemoryOffset_LowBit);
/*8007626C 0007306C*/ PPC::Runtime::ASM::lwz(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r3));
/*80076270 00073070*/ PPC::Runtime::ASM::bl(fn_8044E698);
/*80076274 00073074*/ PPC::Runtime::ASM::bl(fn_80445860);
/*80076278 00073078*/ PPC::Runtime::ASM::bl(fn_80444E00);
/*8007627C 0007307C*/ PPC::Runtime::ASM::mr(context->r3, context->r29);
/*80076280 00073080*/ PPC::Runtime::ASM::bl(fn_8007854C);
/*80076284 00073084*/ PPC::Runtime::ASM::bl(fn_SomehowRelatedToTheCSSColorChangingButIsCalledOtherPlaces);
/*80076288 00073088*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*8007628C 0007308C*/ PPC::Runtime::ASM::beq(.L_800762A0);
/*80076290 00073090*/ PPC::Runtime::ASM::bl(fn_8007CCC4);
/*80076294 00073094*/ PPC::Runtime::ASM::li(context->r3, 0xb);
/*80076298 00073098*/ PPC::Runtime::ASM::bl(fn_8007B69C);
/*8007629C 0007309C*/ PPC::Runtime::ASM::bl(fn_8007B820);
RUNTIME_PPC_JUMP_LABEL(.L_800762A0, 0x800762A0) //this is a jump label
/*800762A0 000730A0*/ PPC::Runtime::ASM::mr(context->r3, context->r29);
/*800762A4 000730A4*/ PPC::Runtime::ASM::bl(fn_8007634C);
/*800762A8 000730A8*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r31));
/*800762AC 000730AC*/ PPC::Runtime::ASM::bl(fn_80076504);
/*800762B0 000730B0*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*800762B4 000730B4*/ PPC::Runtime::ASM::b(.L_80076330);
RUNTIME_PPC_JUMP_LABEL(.L_800762B8, 0x800762B8) //this is a jump label
/*800762B8 000730B8*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r31));
/*800762BC 000730BC*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r31));
/*800762C0 000730C0*/ PPC::Runtime::ASM::cmpw(context->r4, context->r3);
/*800762C4 000730C4*/ PPC::Runtime::ASM::beq(.L_800762CC);
/*800762C8 000730C8*/ PPC::Runtime::ASM::bl(fn_80076548);
RUNTIME_PPC_JUMP_LABEL(.L_800762CC, 0x800762CC) //this is a jump label
/*800762CC 000730CC*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r31));
/*800762D0 000730D0*/ PPC::Runtime::ASM::bl(fn_80076504);
/*800762D4 000730D4*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*800762D8 000730D8*/ PPC::Runtime::ASM::b(.L_80076330);
RUNTIME_PPC_JUMP_LABEL(.L_800762DC, 0x800762DC) //this is a jump label
/*800762DC 000730DC*/ PPC::Runtime::ASM::lwz(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r31));
/*800762E0 000730E0*/ PPC::Runtime::ASM::bl(fn_LessonTickerDoneCB_TakeNoParam);
/*800762E4 000730E4*/ PPC::Runtime::ASM::bl(fn_80445920);
/*800762E8 000730E8*/ PPC::Runtime::ASM::bl(fn_8044511C);
/*800762EC 000730EC*/ PPC::Runtime::ASM::mr(context->r3, context->r29);
/*800762F0 000730F0*/ PPC::Runtime::ASM::bl(fn_8007666C);
/*800762F4 000730F4*/ PPC::Runtime::ASM::lis(context->r3, STRUCT_BYTE4_COUNT_180552338 @ Get_MemoryOffset_HighBit);
/*800762F8 000730F8*/ PPC::Runtime::ASM::li(context->r0, -0x1);
/*800762FC 000730FC*/ PPC::Runtime::ASM::addi(context->r4, context->r3, STRUCT_BYTE4_COUNT_180552338 @ Get_MemoryOffset_LowBit);
/*80076300 00073100*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r31));
/*80076304 00073104*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*80076308 00073108*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r4));
/*8007630C 0007310C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r30));
/*80076310 00073110*/ PPC::Runtime::ASM::b(.L_80076330);
RUNTIME_PPC_JUMP_LABEL(.L_80076314, 0x80076314) //this is a jump label
/*80076314 00073114*/ PPC::Runtime::ASM::lis(context->r3, MemoryOffset_280 @ Get_MemoryOffset_HighBit);
/*80076318 00073118*/ PPC::Runtime::ASM::addi(context->r3, context->r3, MemoryOffset_280 @ Get_MemoryOffset_LowBit);
/*8007631C 0007311C*/ PPC::Runtime::ASM::crclr(context->cr1eq);
/*80076320 00073120*/ PPC::Runtime::ASM::bl(OSReport);
/*80076324 00073124*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*80076328 00073128*/ PPC::Runtime::ASM::b(.L_80076330);
RUNTIME_PPC_JUMP_LABEL(.L_8007632C, 0x8007632C) //this is a jump label
/*8007632C 0007312C*/ PPC::Runtime::ASM::li(context->r3, 0x0);
RUNTIME_PPC_JUMP_LABEL(.L_80076330, 0x80076330) //this is a jump label
/*80076330 00073130*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*80076334 00073134*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*80076338 00073138*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*8007633C 0007313C*/ PPC::Runtime::ASM::lwz(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80076340 00073140*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80076344 00073144*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x20);
/*80076348 00073148*/ PPC::Runtime::ASM::blr();
}