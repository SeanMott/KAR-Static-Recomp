//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_8045336C.hpp"
#include "fn_8045C7D4.hpp"
#include "fn_8045BCA4.hpp"
#include "fn_8045BCA4.hpp"
#include "fn_8045336C.hpp"
#include "fn_CARDRead.hpp"
#include "fn_debug_memCard_reqLoad.hpp"
#include "fn_8045C080.hpp"
#include "fn_8045336C.hpp"
#include "fn_CARDRead.hpp"
#include "fn_debug_memCard_reqLoad.hpp"
#include "fn_memcard_moveDataIntoCorrectSpot.hpp"
#include "fn_8045C080.hpp"
#include "fn_8045BD80.hpp"
#include "fn_8045B9BC.hpp"
#include "fn_8045B9BC.hpp"
#include "fn_8045C7D4.hpp"
#include "fn_80453440.hpp"
#include "fn_804532E4.hpp"
#include "fn_8045C080.hpp"
#include "fn_8045BD80.hpp"
#include "fn_8045B9BC.hpp"
#include "fn_8045B9BC.hpp"
#include "fn_8045B9BC.hpp"



void fn_80452B5C(PPC::Runtime::GCContext* context)
{
/*80452B5C 0044F95C*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0xd0, context->r1));
/*80452B60 0044F960*/ PPC::Runtime::ASM::mflr(context->r0);
/*80452B64 0044F964*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xd4, context->r1));
/*80452B68 0044F968*/ PPC::Runtime::ASM::addi(context->r11, context->r1, 0xd0);
/*80452B6C 0044F96C*/ PPC::Runtime::ASM::bl(_savegpr_19);
/*80452B70 0044F970*/ PPC::Runtime::ASM::lis(context->r3, STRUCT_BYTE4_COUNT_18059A880 @ Get_MemoryOffset_HighBit);
/*80452B74 0044F974*/ PPC::Runtime::ASM::lis(context->r4, lbl_80531E40 @ Get_MemoryOffset_HighBit);
/*80452B78 0044F978*/ PPC::Runtime::ASM::addi(context->r30, context->r3, STRUCT_BYTE4_COUNT_18059A880 @ Get_MemoryOffset_LowBit);
/*80452B7C 0044F97C*/ PPC::Runtime::ASM::lwz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r30));
/*80452B80 0044F980*/ PPC::Runtime::ASM::addi(context->r29, context->r4, lbl_80531E40 @ Get_MemoryOffset_LowBit);
/*80452B84 0044F984*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x50c, context->r30));
/*80452B88 0044F988*/ PPC::Runtime::ASM::lwz(context->r25, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x60, context->r5));
/*80452B8C 0044F98C*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x64, context->r5));
/*80452B90 0044F990*/ PPC::Runtime::ASM::bl(fn_8045336C);
/*80452B94 0044F994*/ PPC::Runtime::ASM::mr(context->r0, context->r3);
/*80452B98 0044F998*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*80452B9C 0044F99C*/ PPC::Runtime::ASM::mr(context->r24, context->r0);
/*80452BA0 0044F9A0*/ PPC::Runtime::ASM::bl(fn_8045C7D4);
/*80452BA4 0044F9A4*/ PPC::Runtime::ASM::subi(context->r23, context->r3, 0x30);
/*80452BA8 0044F9A8*/ PPC::Runtime::ASM::addi(context->r3, context->r1, 0x5c);
/*80452BAC 0044F9AC*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*80452BB0 0044F9B0*/ PPC::Runtime::ASM::li(context->r5, 0x30);
/*80452BB4 0044F9B4*/ PPC::Runtime::ASM::bl(fn_8045BCA4);
/*80452BB8 0044F9B8*/ PPC::Runtime::ASM::addi(context->r3, context->r1, 0x2c);
/*80452BBC 0044F9BC*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*80452BC0 0044F9C0*/ PPC::Runtime::ASM::li(context->r5, 0x30);
/*80452BC4 0044F9C4*/ PPC::Runtime::ASM::bl(fn_8045BCA4);
/*80452BC8 0044F9C8*/ PPC::Runtime::ASM::addi(context->r26, context->r1, 0x5c);
/*80452BCC 0044F9CC*/ PPC::Runtime::ASM::li(context->r28, 0x0);
/*80452BD0 0044F9D0*/ PPC::Runtime::ASM::mr(context->r27, context->r26);
/*80452BD4 0044F9D4*/ PPC::Runtime::ASM::b(.L_80452E64);
RUNTIME_PPC_JUMP_LABEL(.L_80452BD8, 0x80452BD8) //this is a jump label
/*80452BD8 0044F9D8*/ PPC::Runtime::ASM::cmpw(context->r23, context->r24);
/*80452BDC 0044F9DC*/ PPC::Runtime::ASM::ble(.L_80452D1C);
/*80452BE0 0044F9E0*/ PPC::Runtime::ASM::lis(context->r4, STRUCT_BYTE4_COUNT_18059A880 @ Get_MemoryOffset_HighBit);
/*80452BE4 0044F9E4*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x50c, context->r30));
/*80452BE8 0044F9E8*/ PPC::Runtime::ASM::addi(context->r4, context->r4, STRUCT_BYTE4_COUNT_18059A880 @ Get_MemoryOffset_LowBit);
/*80452BEC 0044F9EC*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r4));
/*80452BF0 0044F9F0*/ PPC::Runtime::ASM::lwz(context->r20, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x64, context->r4));
/*80452BF4 0044F9F4*/ PPC::Runtime::ASM::bl(fn_8045336C);
/*80452BF8 0044F9F8*/ PPC::Runtime::ASM::mr(context->r21, context->r3);
/*80452BFC 0044F9FC*/ PPC::Runtime::ASM::addis(context->r4, context->r30, 0x1);
/*80452C00 0044FA00*/ PPC::Runtime::ASM::divw(context->r22, context->r28, context->r21);
/*80452C04 0044FA04*/ PPC::Runtime::ASM::mr(context->r5, context->r24);
/*80452C08 0044FA08*/ PPC::Runtime::ASM::mr(context->r6, context->r28);
/*80452C0C 0044FA0C*/ PPC::Runtime::ASM::addi(context->r3, context->r30, 0x518);
/*80452C10 0044FA10*/ PPC::Runtime::ASM::subi(context->r4, context->r4, 0x4a00);
/*80452C14 0044FA14*/ PPC::Runtime::ASM::bl(fn_CARDRead);
/*80452C18 0044FA18*/ PPC::Runtime::ASM::cmpwi(context->r3, -0x5);
/*80452C1C 0044FA1C*/ PPC::Runtime::ASM::beq(.L_80452CA4);
/*80452C20 0044FA20*/ PPC::Runtime::ASM::bge(.L_80452C50);
/*80452C24 0044FA24*/ PPC::Runtime::ASM::cmpwi(context->r3, -0xe);
/*80452C28 0044FA28*/ PPC::Runtime::ASM::beq(.L_80452CBC);
/*80452C2C 0044FA2C*/ PPC::Runtime::ASM::bge(.L_80452C3C);
/*80452C30 0044FA30*/ PPC::Runtime::ASM::cmpwi(context->r3, -0x80);
/*80452C34 0044FA34*/ PPC::Runtime::ASM::beq(.L_80452CA4);
/*80452C38 0044FA38*/ PPC::Runtime::ASM::b(.L_80452CBC);
RUNTIME_PPC_JUMP_LABEL(.L_80452C3C, 0x80452C3C) //this is a jump label
/*80452C3C 0044FA3C*/ PPC::Runtime::ASM::cmpwi(context->r3, -0x6);
/*80452C40 0044FA40*/ PPC::Runtime::ASM::bge(.L_80452CB4);
/*80452C44 0044FA44*/ PPC::Runtime::ASM::cmpwi(context->r3, -0xc);
/*80452C48 0044FA48*/ PPC::Runtime::ASM::bge(.L_80452CBC);
/*80452C4C 0044FA4C*/ PPC::Runtime::ASM::b(.L_80452CAC);
RUNTIME_PPC_JUMP_LABEL(.L_80452C50, 0x80452C50) //this is a jump label
/*80452C50 0044FA50*/ PPC::Runtime::ASM::cmpwi(context->r3, -0x1);
/*80452C54 0044FA54*/ PPC::Runtime::ASM::beq(.L_80452C7C);
/*80452C58 0044FA58*/ PPC::Runtime::ASM::bge(.L_80452C6C);
/*80452C5C 0044FA5C*/ PPC::Runtime::ASM::cmpwi(context->r3, -0x3);
/*80452C60 0044FA60*/ PPC::Runtime::ASM::beq(.L_80452C84);
/*80452C64 0044FA64*/ PPC::Runtime::ASM::bge(.L_80452C8C);
/*80452C68 0044FA68*/ PPC::Runtime::ASM::b(.L_80452C94);
RUNTIME_PPC_JUMP_LABEL(.L_80452C6C, 0x80452C6C) //this is a jump label
/*80452C6C 0044FA6C*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x1);
/*80452C70 0044FA70*/ PPC::Runtime::ASM::beq(.L_80452CBC);
/*80452C74 0044FA74*/ PPC::Runtime::ASM::bge(.L_80452CBC);
/*80452C78 0044FA78*/ PPC::Runtime::ASM::b(.L_80452C9C);
RUNTIME_PPC_JUMP_LABEL(.L_80452C7C, 0x80452C7C) //this is a jump label
/*80452C7C 0044FA7C*/ PPC::Runtime::ASM::li(context->r19, 0xb);
/*80452C80 0044FA80*/ PPC::Runtime::ASM::b(.L_80452CC0);
RUNTIME_PPC_JUMP_LABEL(.L_80452C84, 0x80452C84) //this is a jump label
/*80452C84 0044FA84*/ PPC::Runtime::ASM::li(context->r19, 0xe);
/*80452C88 0044FA88*/ PPC::Runtime::ASM::b(.L_80452CC0);
RUNTIME_PPC_JUMP_LABEL(.L_80452C8C, 0x80452C8C) //this is a jump label
/*80452C8C 0044FA8C*/ PPC::Runtime::ASM::li(context->r19, 0xf);
/*80452C90 0044FA90*/ PPC::Runtime::ASM::b(.L_80452CC0);
RUNTIME_PPC_JUMP_LABEL(.L_80452C94, 0x80452C94) //this is a jump label
/*80452C94 0044FA94*/ PPC::Runtime::ASM::li(context->r19, 0x6);
/*80452C98 0044FA98*/ PPC::Runtime::ASM::b(.L_80452CC0);
RUNTIME_PPC_JUMP_LABEL(.L_80452C9C, 0x80452C9C) //this is a jump label
/*80452C9C 0044FA9C*/ PPC::Runtime::ASM::li(context->r19, 0x0);
/*80452CA0 0044FAA0*/ PPC::Runtime::ASM::b(.L_80452CC0);
RUNTIME_PPC_JUMP_LABEL(.L_80452CA4, 0x80452CA4) //this is a jump label
/*80452CA4 0044FAA4*/ PPC::Runtime::ASM::li(context->r19, 0xd);
/*80452CA8 0044FAA8*/ PPC::Runtime::ASM::b(.L_80452CC0);
RUNTIME_PPC_JUMP_LABEL(.L_80452CAC, 0x80452CAC) //this is a jump label
/*80452CAC 0044FAAC*/ PPC::Runtime::ASM::li(context->r19, 0x9);
/*80452CB0 0044FAB0*/ PPC::Runtime::ASM::b(.L_80452CC0);
RUNTIME_PPC_JUMP_LABEL(.L_80452CB4, 0x80452CB4) //this is a jump label
/*80452CB4 0044FAB4*/ PPC::Runtime::ASM::li(context->r19, 0xa);
/*80452CB8 0044FAB8*/ PPC::Runtime::ASM::b(.L_80452CC0);
RUNTIME_PPC_JUMP_LABEL(.L_80452CBC, 0x80452CBC) //this is a jump label
/*80452CBC 0044FABC*/ PPC::Runtime::ASM::li(context->r19, 0xc);
RUNTIME_PPC_JUMP_LABEL(.L_80452CC0, 0x80452CC0) //this is a jump label
/*80452CC0 0044FAC0*/ PPC::Runtime::ASM::cmpwi(context->r19, 0x0);
/*80452CC4 0044FAC4*/ PPC::Runtime::ASM::beq(.L_80452CCC);
/*80452CC8 0044FAC8*/ PPC::Runtime::ASM::b(.L_80452CE8);
RUNTIME_PPC_JUMP_LABEL(.L_80452CCC, 0x80452CCC) //this is a jump label
/*80452CCC 0044FACC*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r20));
/*80452CD0 0044FAD0*/ PPC::Runtime::ASM::cmpw(context->r22, context->r0);
/*80452CD4 0044FAD4*/ PPC::Runtime::ASM::blt(.L_80452CE8);
/*80452CD8 0044FAD8*/ PPC::Runtime::ASM::addis(context->r3, context->r30, 0x1);
/*80452CDC 0044FADC*/ PPC::Runtime::ASM::mr(context->r4, context->r21);
/*80452CE0 0044FAE0*/ PPC::Runtime::ASM::subi(context->r3, context->r3, 0x4a00);
/*80452CE4 0044FAE4*/ PPC::Runtime::ASM::bl(fn_debug_memCard_reqLoad);
RUNTIME_PPC_JUMP_LABEL(.L_80452CE8, 0x80452CE8) //this is a jump label
/*80452CE8 0044FAE8*/ PPC::Runtime::ASM::cmpwi(context->r19, 0x0);
/*80452CEC 0044FAEC*/ PPC::Runtime::ASM::beq(.L_80452CF8);
/*80452CF0 0044FAF0*/ PPC::Runtime::ASM::mr(context->r3, context->r19);
/*80452CF4 0044FAF4*/ PPC::Runtime::ASM::b(.L_80453068);
RUNTIME_PPC_JUMP_LABEL(.L_80452CF8, 0x80452CF8) //this is a jump label
/*80452CF8 0044FAF8*/ PPC::Runtime::ASM::addis(context->r3, context->r30, 0x1);
/*80452CFC 0044FAFC*/ PPC::Runtime::ASM::mr(context->r4, context->r24);
/*80452D00 0044FB00*/ PPC::Runtime::ASM::mr(context->r5, context->r27);
/*80452D04 0044FB04*/ PPC::Runtime::ASM::subi(context->r3, context->r3, 0x4a00);
/*80452D08 0044FB08*/ PPC::Runtime::ASM::bl(fn_8045C080);
/*80452D0C 0044FB0C*/ PPC::Runtime::ASM::subf(context->r23, context->r24, context->r23);
/*80452D10 0044FB10*/ PPC::Runtime::ASM::add(context->r28, context->r28, context->r24);
/*80452D14 0044FB14*/ PPC::Runtime::ASM::addi(context->r27, context->r27, 0x10);
/*80452D18 0044FB18*/ PPC::Runtime::ASM::b(.L_80452E64);
RUNTIME_PPC_JUMP_LABEL(.L_80452D1C, 0x80452D1C) //this is a jump label
/*80452D1C 0044FB1C*/ PPC::Runtime::ASM::lis(context->r4, STRUCT_BYTE4_COUNT_18059A880 @ Get_MemoryOffset_HighBit);
/*80452D20 0044FB20*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x50c, context->r30));
/*80452D24 0044FB24*/ PPC::Runtime::ASM::addi(context->r4, context->r4, STRUCT_BYTE4_COUNT_18059A880 @ Get_MemoryOffset_LowBit);
/*80452D28 0044FB28*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r4));
/*80452D2C 0044FB2C*/ PPC::Runtime::ASM::lwz(context->r22, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x64, context->r4));
/*80452D30 0044FB30*/ PPC::Runtime::ASM::bl(fn_8045336C);
/*80452D34 0044FB34*/ PPC::Runtime::ASM::mr(context->r21, context->r3);
/*80452D38 0044FB38*/ PPC::Runtime::ASM::addis(context->r4, context->r30, 0x1);
/*80452D3C 0044FB3C*/ PPC::Runtime::ASM::divw(context->r20, context->r28, context->r21);
/*80452D40 0044FB40*/ PPC::Runtime::ASM::mr(context->r5, context->r24);
/*80452D44 0044FB44*/ PPC::Runtime::ASM::mr(context->r6, context->r28);
/*80452D48 0044FB48*/ PPC::Runtime::ASM::addi(context->r3, context->r30, 0x518);
/*80452D4C 0044FB4C*/ PPC::Runtime::ASM::subi(context->r4, context->r4, 0x4a00);
/*80452D50 0044FB50*/ PPC::Runtime::ASM::bl(fn_CARDRead);
/*80452D54 0044FB54*/ PPC::Runtime::ASM::cmpwi(context->r3, -0x5);
/*80452D58 0044FB58*/ PPC::Runtime::ASM::beq(.L_80452DE0);
/*80452D5C 0044FB5C*/ PPC::Runtime::ASM::bge(.L_80452D8C);
/*80452D60 0044FB60*/ PPC::Runtime::ASM::cmpwi(context->r3, -0xe);
/*80452D64 0044FB64*/ PPC::Runtime::ASM::beq(.L_80452DF8);
/*80452D68 0044FB68*/ PPC::Runtime::ASM::bge(.L_80452D78);
/*80452D6C 0044FB6C*/ PPC::Runtime::ASM::cmpwi(context->r3, -0x80);
/*80452D70 0044FB70*/ PPC::Runtime::ASM::beq(.L_80452DE0);
/*80452D74 0044FB74*/ PPC::Runtime::ASM::b(.L_80452DF8);
RUNTIME_PPC_JUMP_LABEL(.L_80452D78, 0x80452D78) //this is a jump label
/*80452D78 0044FB78*/ PPC::Runtime::ASM::cmpwi(context->r3, -0x6);
/*80452D7C 0044FB7C*/ PPC::Runtime::ASM::bge(.L_80452DF0);
/*80452D80 0044FB80*/ PPC::Runtime::ASM::cmpwi(context->r3, -0xc);
/*80452D84 0044FB84*/ PPC::Runtime::ASM::bge(.L_80452DF8);
/*80452D88 0044FB88*/ PPC::Runtime::ASM::b(.L_80452DE8);
RUNTIME_PPC_JUMP_LABEL(.L_80452D8C, 0x80452D8C) //this is a jump label
/*80452D8C 0044FB8C*/ PPC::Runtime::ASM::cmpwi(context->r3, -0x1);
/*80452D90 0044FB90*/ PPC::Runtime::ASM::beq(.L_80452DB8);
/*80452D94 0044FB94*/ PPC::Runtime::ASM::bge(.L_80452DA8);
/*80452D98 0044FB98*/ PPC::Runtime::ASM::cmpwi(context->r3, -0x3);
/*80452D9C 0044FB9C*/ PPC::Runtime::ASM::beq(.L_80452DC0);
/*80452DA0 0044FBA0*/ PPC::Runtime::ASM::bge(.L_80452DC8);
/*80452DA4 0044FBA4*/ PPC::Runtime::ASM::b(.L_80452DD0);
RUNTIME_PPC_JUMP_LABEL(.L_80452DA8, 0x80452DA8) //this is a jump label
/*80452DA8 0044FBA8*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x1);
/*80452DAC 0044FBAC*/ PPC::Runtime::ASM::beq(.L_80452DF8);
/*80452DB0 0044FBB0*/ PPC::Runtime::ASM::bge(.L_80452DF8);
/*80452DB4 0044FBB4*/ PPC::Runtime::ASM::b(.L_80452DD8);
RUNTIME_PPC_JUMP_LABEL(.L_80452DB8, 0x80452DB8) //this is a jump label
/*80452DB8 0044FBB8*/ PPC::Runtime::ASM::li(context->r19, 0xb);
/*80452DBC 0044FBBC*/ PPC::Runtime::ASM::b(.L_80452DFC);
RUNTIME_PPC_JUMP_LABEL(.L_80452DC0, 0x80452DC0) //this is a jump label
/*80452DC0 0044FBC0*/ PPC::Runtime::ASM::li(context->r19, 0xe);
/*80452DC4 0044FBC4*/ PPC::Runtime::ASM::b(.L_80452DFC);
RUNTIME_PPC_JUMP_LABEL(.L_80452DC8, 0x80452DC8) //this is a jump label
/*80452DC8 0044FBC8*/ PPC::Runtime::ASM::li(context->r19, 0xf);
/*80452DCC 0044FBCC*/ PPC::Runtime::ASM::b(.L_80452DFC);
RUNTIME_PPC_JUMP_LABEL(.L_80452DD0, 0x80452DD0) //this is a jump label
/*80452DD0 0044FBD0*/ PPC::Runtime::ASM::li(context->r19, 0x6);
/*80452DD4 0044FBD4*/ PPC::Runtime::ASM::b(.L_80452DFC);
RUNTIME_PPC_JUMP_LABEL(.L_80452DD8, 0x80452DD8) //this is a jump label
/*80452DD8 0044FBD8*/ PPC::Runtime::ASM::li(context->r19, 0x0);
/*80452DDC 0044FBDC*/ PPC::Runtime::ASM::b(.L_80452DFC);
RUNTIME_PPC_JUMP_LABEL(.L_80452DE0, 0x80452DE0) //this is a jump label
/*80452DE0 0044FBE0*/ PPC::Runtime::ASM::li(context->r19, 0xd);
/*80452DE4 0044FBE4*/ PPC::Runtime::ASM::b(.L_80452DFC);
RUNTIME_PPC_JUMP_LABEL(.L_80452DE8, 0x80452DE8) //this is a jump label
/*80452DE8 0044FBE8*/ PPC::Runtime::ASM::li(context->r19, 0x9);
/*80452DEC 0044FBEC*/ PPC::Runtime::ASM::b(.L_80452DFC);
RUNTIME_PPC_JUMP_LABEL(.L_80452DF0, 0x80452DF0) //this is a jump label
/*80452DF0 0044FBF0*/ PPC::Runtime::ASM::li(context->r19, 0xa);
/*80452DF4 0044FBF4*/ PPC::Runtime::ASM::b(.L_80452DFC);
RUNTIME_PPC_JUMP_LABEL(.L_80452DF8, 0x80452DF8) //this is a jump label
/*80452DF8 0044FBF8*/ PPC::Runtime::ASM::li(context->r19, 0xc);
RUNTIME_PPC_JUMP_LABEL(.L_80452DFC, 0x80452DFC) //this is a jump label
/*80452DFC 0044FBFC*/ PPC::Runtime::ASM::cmpwi(context->r19, 0x0);
/*80452E00 0044FC00*/ PPC::Runtime::ASM::beq(.L_80452E08);
/*80452E04 0044FC04*/ PPC::Runtime::ASM::b(.L_80452E24);
RUNTIME_PPC_JUMP_LABEL(.L_80452E08, 0x80452E08) //this is a jump label
/*80452E08 0044FC08*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r22));
/*80452E0C 0044FC0C*/ PPC::Runtime::ASM::cmpw(context->r20, context->r0);
/*80452E10 0044FC10*/ PPC::Runtime::ASM::blt(.L_80452E24);
/*80452E14 0044FC14*/ PPC::Runtime::ASM::addis(context->r3, context->r30, 0x1);
/*80452E18 0044FC18*/ PPC::Runtime::ASM::mr(context->r4, context->r21);
/*80452E1C 0044FC1C*/ PPC::Runtime::ASM::subi(context->r3, context->r3, 0x4a00);
/*80452E20 0044FC20*/ PPC::Runtime::ASM::bl(fn_debug_memCard_reqLoad);
RUNTIME_PPC_JUMP_LABEL(.L_80452E24, 0x80452E24) //this is a jump label
/*80452E24 0044FC24*/ PPC::Runtime::ASM::cmpwi(context->r19, 0x0);
/*80452E28 0044FC28*/ PPC::Runtime::ASM::beq(.L_80452E34);
/*80452E2C 0044FC2C*/ PPC::Runtime::ASM::mr(context->r3, context->r19);
/*80452E30 0044FC30*/ PPC::Runtime::ASM::b(.L_80453068);
RUNTIME_PPC_JUMP_LABEL(.L_80452E34, 0x80452E34) //this is a jump label
/*80452E34 0044FC34*/ PPC::Runtime::ASM::addis(context->r4, context->r23, 0x1);
/*80452E38 0044FC38*/ PPC::Runtime::ASM::addi(context->r3, context->r1, 0x2c);
/*80452E3C 0044FC3C*/ PPC::Runtime::ASM::subi(context->r4, context->r4, 0x4a00);
/*80452E40 0044FC40*/ PPC::Runtime::ASM::li(context->r5, 0x30);
/*80452E44 0044FC44*/ PPC::Runtime::ASM::add(context->r4, context->r30, context->r4);
/*80452E48 0044FC48*/ PPC::Runtime::ASM::bl(fn_memcard_moveDataIntoCorrectSpot);
/*80452E4C 0044FC4C*/ PPC::Runtime::ASM::addis(context->r3, context->r30, 0x1);
/*80452E50 0044FC50*/ PPC::Runtime::ASM::mr(context->r4, context->r23);
/*80452E54 0044FC54*/ PPC::Runtime::ASM::mr(context->r5, context->r27);
/*80452E58 0044FC58*/ PPC::Runtime::ASM::subi(context->r3, context->r3, 0x4a00);
/*80452E5C 0044FC5C*/ PPC::Runtime::ASM::bl(fn_8045C080);
/*80452E60 0044FC60*/ PPC::Runtime::ASM::li(context->r23, -0x1);
RUNTIME_PPC_JUMP_LABEL(.L_80452E64, 0x80452E64) //this is a jump label
/*80452E64 0044FC64*/ PPC::Runtime::ASM::cmpwi(context->r23, 0x0);
/*80452E68 0044FC68*/ PPC::Runtime::ASM::bge(.L_80452BD8);
/*80452E6C 0044FC6C*/ PPC::Runtime::ASM::li(context->r28, 0x0);
/*80452E70 0044FC70*/ PPC::Runtime::ASM::lis(context->r3, STRUCT_BYTE4_COUNT_18059A880 @ Get_MemoryOffset_HighBit);
/*80452E74 0044FC74*/ PPC::Runtime::ASM::stw(context->r28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r31));
/*80452E78 0044FC78*/ PPC::Runtime::ASM::addi(context->r27, context->r3, STRUCT_BYTE4_COUNT_18059A880 @ Get_MemoryOffset_LowBit);
/*80452E7C 0044FC7C*/ PPC::Runtime::ASM::addi(context->r19, context->r1, 0x2c);
/*80452E80 0044FC80*/ PPC::Runtime::ASM::b(.L_80452F04);
RUNTIME_PPC_JUMP_LABEL(.L_80452E84, 0x80452E84) //this is a jump label
/*80452E84 0044FC84*/ PPC::Runtime::ASM::mr(context->r3, context->r26);
/*80452E88 0044FC88*/ PPC::Runtime::ASM::mr(context->r4, context->r19);
/*80452E8C 0044FC8C*/ PPC::Runtime::ASM::li(context->r5, 0x10);
/*80452E90 0044FC90*/ PPC::Runtime::ASM::bl(fn_8045BD80);
/*80452E94 0044FC94*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*80452E98 0044FC98*/ PPC::Runtime::ASM::beq(.L_80452ECC);
/*80452E9C 0044FC9C*/ PPC::Runtime::ASM::mr(context->r4, context->r28);
/*80452EA0 0044FCA0*/ PPC::Runtime::ASM::addi(context->r3, context->r29, 0xc0);
/*80452EA4 0044FCA4*/ PPC::Runtime::ASM::crclr(context->cr1eq);
/*80452EA8 0044FCA8*/ PPC::Runtime::ASM::bl(fn_8045B9BC);
/*80452EAC 0044FCAC*/ PPC::Runtime::ASM::li(context->r3, 0x1);
/*80452EB0 0044FCB0*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*80452EB4 0044FCB4*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r31));
/*80452EB8 0044FCB8*/ PPC::Runtime::ASM::addis(context->r3, context->r27, 0x1);
/*80452EBC 0044FCBC*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x7628, context->r27));
/*80452EC0 0044FCC0*/ PPC::Runtime::ASM::stw(context->r28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x563c, context->r27));
/*80452EC4 0044FCC4*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x69ec, context->r3));
/*80452EC8 0044FCC8*/ PPC::Runtime::ASM::b(.L_80452EF4);
RUNTIME_PPC_JUMP_LABEL(.L_80452ECC, 0x80452ECC) //this is a jump label
/*80452ECC 0044FCCC*/ PPC::Runtime::ASM::mr(context->r4, context->r28);
/*80452ED0 0044FCD0*/ PPC::Runtime::ASM::addi(context->r3, context->r29, 0xe8);
/*80452ED4 0044FCD4*/ PPC::Runtime::ASM::crclr(context->cr1eq);
/*80452ED8 0044FCD8*/ PPC::Runtime::ASM::bl(fn_8045B9BC);
/*80452EDC 0044FCDC*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*80452EE0 0044FCE0*/ PPC::Runtime::ASM::addis(context->r3, context->r27, 0x1);
/*80452EE4 0044FCE4*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x7628, context->r27));
/*80452EE8 0044FCE8*/ PPC::Runtime::ASM::li(context->r0, 0x1);
/*80452EEC 0044FCEC*/ PPC::Runtime::ASM::stw(context->r28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x563c, context->r27));
/*80452EF0 0044FCF0*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x69ec, context->r3));
RUNTIME_PPC_JUMP_LABEL(.L_80452EF4, 0x80452EF4) //this is a jump label
/*80452EF4 0044FCF4*/ PPC::Runtime::ASM::addi(context->r19, context->r19, 0x10);
/*80452EF8 0044FCF8*/ PPC::Runtime::ASM::addi(context->r26, context->r26, 0x10);
/*80452EFC 0044FCFC*/ PPC::Runtime::ASM::addi(context->r27, context->r27, 0x4);
/*80452F00 0044FD00*/ PPC::Runtime::ASM::addi(context->r28, context->r28, 0x1);
RUNTIME_PPC_JUMP_LABEL(.L_80452F04, 0x80452F04) //this is a jump label
/*80452F04 0044FD04*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r31));
/*80452F08 0044FD08*/ PPC::Runtime::ASM::cmpw(context->r28, context->r0);
/*80452F0C 0044FD0C*/ PPC::Runtime::ASM::blt(.L_80452E84);
/*80452F10 0044FD10*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r25));
/*80452F14 0044FD14*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x0);
/*80452F18 0044FD18*/ PPC::Runtime::ASM::ble(.L_80453064);
/*80452F1C 0044FD1C*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*80452F20 0044FD20*/ PPC::Runtime::ASM::bl(fn_8045C7D4);
/*80452F24 0044FD24*/ PPC::Runtime::ASM::divw(context->r0, context->r3, context->r24);
/*80452F28 0044FD28*/ PPC::Runtime::ASM::mr(context->r4, context->r31);
/*80452F2C 0044FD2C*/ PPC::Runtime::ASM::mr(context->r5, context->r24);
/*80452F30 0044FD30*/ PPC::Runtime::ASM::mullw(context->r0, context->r0, context->r24);
/*80452F34 0044FD34*/ PPC::Runtime::ASM::subf(context->r20, context->r0, context->r3);
/*80452F38 0044FD38*/ PPC::Runtime::ASM::mr(context->r3, context->r25);
/*80452F3C 0044FD3C*/ PPC::Runtime::ASM::bl(fn_80453440);
/*80452F40 0044FD40*/ PPC::Runtime::ASM::add(context->r4, context->r20, context->r30);
/*80452F44 0044FD44*/ PPC::Runtime::ASM::mr(context->r23, context->r3);
/*80452F48 0044FD48*/ PPC::Runtime::ASM::addis(context->r19, context->r4, 0x1);
/*80452F4C 0044FD4C*/ PPC::Runtime::ASM::addi(context->r4, context->r1, 0x18);
/*80452F50 0044FD50*/ PPC::Runtime::ASM::subi(context->r19, context->r19, 0x49f0);
/*80452F54 0044FD54*/ PPC::Runtime::ASM::addi(context->r5, context->r1, 0x14);
/*80452F58 0044FD58*/ PPC::Runtime::ASM::mr(context->r3, context->r19);
/*80452F5C 0044FD5C*/ PPC::Runtime::ASM::addi(context->r6, context->r1, 0x10);
/*80452F60 0044FD60*/ PPC::Runtime::ASM::addi(context->r7, context->r1, 0xc);
/*80452F64 0044FD64*/ PPC::Runtime::ASM::addi(context->r8, context->r1, 0x8);
/*80452F68 0044FD68*/ PPC::Runtime::ASM::bl(fn_804532E4);
/*80452F6C 0044FD6C*/ PPC::Runtime::ASM::mr(context->r3, context->r19);
/*80452F70 0044FD70*/ PPC::Runtime::ASM::addi(context->r4, context->r23, 0x10);
/*80452F74 0044FD74*/ PPC::Runtime::ASM::addi(context->r5, context->r1, 0x1c);
/*80452F78 0044FD78*/ PPC::Runtime::ASM::bl(fn_8045C080);
/*80452F7C 0044FD7C*/ PPC::Runtime::ASM::addis(context->r3, context->r20, 0x1);
/*80452F80 0044FD80*/ PPC::Runtime::ASM::addi(context->r4, context->r1, 0x1c);
/*80452F84 0044FD84*/ PPC::Runtime::ASM::subi(context->r3, context->r3, 0x4a00);
/*80452F88 0044FD88*/ PPC::Runtime::ASM::li(context->r5, 0x10);
/*80452F8C 0044FD8C*/ PPC::Runtime::ASM::add(context->r3, context->r30, context->r3);
/*80452F90 0044FD90*/ PPC::Runtime::ASM::bl(fn_8045BD80);
/*80452F94 0044FD94*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*80452F98 0044FD98*/ PPC::Runtime::ASM::bne(.L_8045300C);
/*80452F9C 0044FD9C*/ PPC::Runtime::ASM::lwz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r31));
/*80452FA0 0044FDA0*/ PPC::Runtime::ASM::addi(context->r3, context->r29, 0x20);
/*80452FA4 0044FDA4*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*80452FA8 0044FDA8*/ PPC::Runtime::ASM::lwz(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80452FAC 0044FDAC*/ PPC::Runtime::ASM::subi(context->r5, context->r5, 0x1);
/*80452FB0 0044FDB0*/ PPC::Runtime::ASM::lwz(context->r7, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*80452FB4 0044FDB4*/ PPC::Runtime::ASM::crclr(context->cr1eq);
/*80452FB8 0044FDB8*/ PPC::Runtime::ASM::bl(fn_8045B9BC);
/*80452FBC 0044FDBC*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r31));
/*80452FC0 0044FDC0*/ PPC::Runtime::ASM::lis(context->r4, STRUCT_BYTE4_COUNT_18059A880 @ Get_MemoryOffset_HighBit);
/*80452FC4 0044FDC4*/ PPC::Runtime::ASM::addi(context->r4, context->r4, STRUCT_BYTE4_COUNT_18059A880 @ Get_MemoryOffset_LowBit);
/*80452FC8 0044FDC8*/ PPC::Runtime::ASM::subi(context->r5, context->r3, 0x1);
/*80452FCC 0044FDCC*/ PPC::Runtime::ASM::addis(context->r3, context->r4, 0x1);
/*80452FD0 0044FDD0*/ PPC::Runtime::ASM::slwi(context->r0, context->r5, 2);
/*80452FD4 0044FDD4*/ PPC::Runtime::ASM::add(context->r3, context->r3, context->r0);
/*80452FD8 0044FDD8*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x69ec, context->r3));
/*80452FDC 0044FDDC*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x0);
/*80452FE0 0044FDE0*/ PPC::Runtime::ASM::beq(.L_80452FEC);
/*80452FE4 0044FDE4*/ PPC::Runtime::ASM::li(context->r7, 0x1);
/*80452FE8 0044FDE8*/ PPC::Runtime::ASM::b(.L_80453030);
RUNTIME_PPC_JUMP_LABEL(.L_80452FEC, 0x80452FEC) //this is a jump label
/*80452FEC 0044FDEC*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*80452FF0 0044FDF0*/ PPC::Runtime::ASM::addi(context->r3, context->r29, 0x110);
/*80452FF4 0044FDF4*/ PPC::Runtime::ASM::lwz(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80452FF8 0044FDF8*/ PPC::Runtime::ASM::lwz(context->r7, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*80452FFC 0044FDFC*/ PPC::Runtime::ASM::crclr(context->cr1eq);
/*80453000 0044FE00*/ PPC::Runtime::ASM::bl(fn_8045B9BC);
/*80453004 0044FE04*/ PPC::Runtime::ASM::li(context->r7, 0x1);
/*80453008 0044FE08*/ PPC::Runtime::ASM::b(.L_80453030);
RUNTIME_PPC_JUMP_LABEL(.L_8045300C, 0x8045300C) //this is a jump label
/*8045300C 0044FE0C*/ PPC::Runtime::ASM::lwz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r31));
/*80453010 0044FE10*/ PPC::Runtime::ASM::addi(context->r3, context->r29, 0x70);
/*80453014 0044FE14*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*80453018 0044FE18*/ PPC::Runtime::ASM::lwz(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8045301C 0044FE1C*/ PPC::Runtime::ASM::subi(context->r5, context->r5, 0x1);
/*80453020 0044FE20*/ PPC::Runtime::ASM::lwz(context->r7, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*80453024 0044FE24*/ PPC::Runtime::ASM::crclr(context->cr1eq);
/*80453028 0044FE28*/ PPC::Runtime::ASM::bl(fn_8045B9BC);
/*8045302C 0044FE2C*/ PPC::Runtime::ASM::li(context->r7, 0x0);
RUNTIME_PPC_JUMP_LABEL(.L_80453030, 0x80453030) //this is a jump label
/*80453030 0044FE30*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r31));
/*80453034 0044FE34*/ PPC::Runtime::ASM::lis(context->r4, STRUCT_BYTE4_COUNT_18059A880 @ Get_MemoryOffset_HighBit);
/*80453038 0044FE38*/ PPC::Runtime::ASM::addi(context->r5, context->r4, STRUCT_BYTE4_COUNT_18059A880 @ Get_MemoryOffset_LowBit);
/*8045303C 0044FE3C*/ PPC::Runtime::ASM::lwz(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*80453040 0044FE40*/ PPC::Runtime::ASM::subi(context->r0, context->r3, 0x1);
/*80453044 0044FE44*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80453048 0044FE48*/ PPC::Runtime::ASM::slwi(context->r3, context->r0, 2);
/*8045304C 0044FE4C*/ PPC::Runtime::ASM::addis(context->r0, context->r5, 0x1);
/*80453050 0044FE50*/ PPC::Runtime::ASM::add(context->r5, context->r5, context->r3);
/*80453054 0044FE54*/ PPC::Runtime::ASM::stw(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x7628, context->r5));
/*80453058 0044FE58*/ PPC::Runtime::ASM::add(context->r3, context->r0, context->r3);
/*8045305C 0044FE5C*/ PPC::Runtime::ASM::stw(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x563c, context->r5));
/*80453060 0044FE60*/ PPC::Runtime::ASM::stw(context->r7, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x69ec, context->r3));
RUNTIME_PPC_JUMP_LABEL(.L_80453064, 0x80453064) //this is a jump label
/*80453064 0044FE64*/ PPC::Runtime::ASM::li(context->r3, 0x0);
RUNTIME_PPC_JUMP_LABEL(.L_80453068, 0x80453068) //this is a jump label
/*80453068 0044FE68*/ PPC::Runtime::ASM::addi(context->r11, context->r1, 0xd0);
/*8045306C 0044FE6C*/ PPC::Runtime::ASM::bl(_restgpr_19);
/*80453070 0044FE70*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xd4, context->r1));
/*80453074 0044FE74*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80453078 0044FE78*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0xd0);
/*8045307C 0044FE7C*/ PPC::Runtime::ASM::blr();
}