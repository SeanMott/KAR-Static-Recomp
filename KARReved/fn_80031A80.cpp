//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_gmGetGlobalP.hpp"
#include "fn_80061620.hpp"
#include "fn_CSS_updatePlayerSelectFrame.hpp"
#include "fn_80135574.hpp"
#include "fn_80135554.hpp"
#include "fn_80135BAC.hpp"
#include "fn_80135BAC.hpp"
#include "fn_80135B4C.hpp"
#include "fn_8002F588.hpp"



void fn_80031A80(PPC::Runtime::GCContext* context)
{
/*80031A80 0002E880*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x20, context->r1));
/*80031A84 0002E884*/ PPC::Runtime::ASM::mflr(context->r0);
/*80031A88 0002E888*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*80031A8C 0002E88C*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*80031A90 0002E890*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*80031A94 0002E894*/ PPC::Runtime::ASM::stw(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80031A98 0002E898*/ PPC::Runtime::ASM::mr(context->r29, context->r3);
/*80031A9C 0002E89C*/ PPC::Runtime::ASM::stw(context->r28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*80031AA0 0002E8A0*/ PPC::Runtime::ASM::bl(fn_gmGetGlobalP);
/*80031AA4 0002E8A4*/ PPC::Runtime::ASM::clrlwi(context->r0, context->r29, 24);
/*80031AA8 0002E8A8*/ PPC::Runtime::ASM::lis(context->r5, Struct_PotenciallyAInputOneBasedOnWhatTheSpreadSheetSaysButItASkip @ Get_MemoryOffset_HighBit);
/*80031AAC 0002E8AC*/ PPC::Runtime::ASM::mulli(context->r0, context->r0, 0x44);
/*80031AB0 0002E8B0*/ PPC::Runtime::ASM::lis(context->r4, 0x1);
/*80031AB4 0002E8B4*/ PPC::Runtime::ASM::addi(context->r5, context->r5, Struct_PotenciallyAInputOneBasedOnWhatTheSpreadSheetSaysButItASkip @ Get_MemoryOffset_LowBit);
/*80031AB8 0002E8B8*/ PPC::Runtime::ASM::addi(context->r31, context->r3, 0x1d0);
/*80031ABC 0002E8BC*/ PPC::Runtime::ASM::add(context->r3, context->r5, context->r0);
/*80031AC0 0002E8C0*/ PPC::Runtime::ASM::extsb(context->r5, context->r29);
/*80031AC4 0002E8C4*/ PPC::Runtime::ASM::lwz(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r3));
/*80031AC8 0002E8C8*/ PPC::Runtime::ASM::addi(context->r0, context->r4, 0x8);
/*80031ACC 0002E8CC*/ PPC::Runtime::ASM::add(context->r30, context->r31, context->r5);
/*80031AD0 0002E8D0*/ PPC::Runtime::ASM::and.(context->r0, context->r6, context->r0);
/*80031AD4 0002E8D4*/ PPC::Runtime::ASM::lbz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x25, context->r30));
/*80031AD8 0002E8D8*/ PPC::Runtime::ASM::beq(.L_80031B10);
/*80031ADC 0002E8DC*/ PPC::Runtime::ASM::extsb(context->r0, context->r4);
/*80031AE0 0002E8E0*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x2);
/*80031AE4 0002E8E4*/ PPC::Runtime::ASM::beq(.L_80031BB8);
/*80031AE8 0002E8E8*/ PPC::Runtime::ASM::bge(.L_80031AF8);
/*80031AEC 0002E8EC*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x1);
/*80031AF0 0002E8F0*/ PPC::Runtime::ASM::bge(.L_80031B00);
/*80031AF4 0002E8F4*/ PPC::Runtime::ASM::b(.L_80031BB8);
RUNTIME_PPC_JUMP_LABEL(.L_80031AF8, 0x80031AF8) //this is a jump label
/*80031AF8 0002E8F8*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x4);
/*80031AFC 0002E8FC*/ PPC::Runtime::ASM::bge(.L_80031BB8);
RUNTIME_PPC_JUMP_LABEL(.L_80031B00, 0x80031B00) //this is a jump label
/*80031B00 0002E900*/ PPC::Runtime::ASM::lbz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x25, context->r30));
/*80031B04 0002E904*/ PPC::Runtime::ASM::subi(context->r0, context->r3, 0x1);
/*80031B08 0002E908*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x25, context->r30));
/*80031B0C 0002E90C*/ PPC::Runtime::ASM::b(.L_80031BB8);
RUNTIME_PPC_JUMP_LABEL(.L_80031B10, 0x80031B10) //this is a jump label
/*80031B10 0002E910*/ PPC::Runtime::ASM::lis(context->r3, 0x2);
/*80031B14 0002E914*/ PPC::Runtime::ASM::addi(context->r0, context->r3, 0x4);
/*80031B18 0002E918*/ PPC::Runtime::ASM::and.(context->r0, context->r6, context->r0);
/*80031B1C 0002E91C*/ PPC::Runtime::ASM::beq(.L_80031B54);
/*80031B20 0002E920*/ PPC::Runtime::ASM::extsb(context->r0, context->r4);
/*80031B24 0002E924*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x1);
/*80031B28 0002E928*/ PPC::Runtime::ASM::beq(.L_80031BB8);
/*80031B2C 0002E92C*/ PPC::Runtime::ASM::bge(.L_80031B3C);
/*80031B30 0002E930*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x0);
/*80031B34 0002E934*/ PPC::Runtime::ASM::bge(.L_80031B44);
/*80031B38 0002E938*/ PPC::Runtime::ASM::b(.L_80031BB8);
RUNTIME_PPC_JUMP_LABEL(.L_80031B3C, 0x80031B3C) //this is a jump label
/*80031B3C 0002E93C*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x3);
/*80031B40 0002E940*/ PPC::Runtime::ASM::bge(.L_80031BB8);
RUNTIME_PPC_JUMP_LABEL(.L_80031B44, 0x80031B44) //this is a jump label
/*80031B44 0002E944*/ PPC::Runtime::ASM::lbz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x25, context->r30));
/*80031B48 0002E948*/ PPC::Runtime::ASM::addi(context->r0, context->r3, 0x1);
/*80031B4C 0002E94C*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x25, context->r30));
/*80031B50 0002E950*/ PPC::Runtime::ASM::b(.L_80031BB8);
RUNTIME_PPC_JUMP_LABEL(.L_80031B54, 0x80031B54) //this is a jump label
/*80031B54 0002E954*/ PPC::Runtime::ASM::lis(context->r3, 0x4);
/*80031B58 0002E958*/ PPC::Runtime::ASM::addi(context->r0, context->r3, 0x1);
/*80031B5C 0002E95C*/ PPC::Runtime::ASM::and.(context->r0, context->r6, context->r0);
/*80031B60 0002E960*/ PPC::Runtime::ASM::beq(.L_80031B88);
/*80031B64 0002E964*/ PPC::Runtime::ASM::extsb(context->r0, context->r4);
/*80031B68 0002E968*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x4);
/*80031B6C 0002E96C*/ PPC::Runtime::ASM::bge(.L_80031BB8);
/*80031B70 0002E970*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x2);
/*80031B74 0002E974*/ PPC::Runtime::ASM::bge(.L_80031B7C);
/*80031B78 0002E978*/ PPC::Runtime::ASM::b(.L_80031BB8);
RUNTIME_PPC_JUMP_LABEL(.L_80031B7C, 0x80031B7C) //this is a jump label
/*80031B7C 0002E97C*/ PPC::Runtime::ASM::subi(context->r0, context->r4, 0x2);
/*80031B80 0002E980*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x25, context->r30));
/*80031B84 0002E984*/ PPC::Runtime::ASM::b(.L_80031BB8);
RUNTIME_PPC_JUMP_LABEL(.L_80031B88, 0x80031B88) //this is a jump label
/*80031B88 0002E988*/ PPC::Runtime::ASM::lis(context->r3, 0xc);
/*80031B8C 0002E98C*/ PPC::Runtime::ASM::addi(context->r0, context->r3, 0x3);
/*80031B90 0002E990*/ PPC::Runtime::ASM::and.(context->r0, context->r6, context->r0);
/*80031B94 0002E994*/ PPC::Runtime::ASM::beq(.L_80031BB8);
/*80031B98 0002E998*/ PPC::Runtime::ASM::extsb(context->r0, context->r4);
/*80031B9C 0002E99C*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x2);
/*80031BA0 0002E9A0*/ PPC::Runtime::ASM::bge(.L_80031BB8);
/*80031BA4 0002E9A4*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x0);
/*80031BA8 0002E9A8*/ PPC::Runtime::ASM::bge(.L_80031BB0);
/*80031BAC 0002E9AC*/ PPC::Runtime::ASM::b(.L_80031BB8);
RUNTIME_PPC_JUMP_LABEL(.L_80031BB0, 0x80031BB0) //this is a jump label
/*80031BB0 0002E9B0*/ PPC::Runtime::ASM::addi(context->r0, context->r4, 0x2);
/*80031BB4 0002E9B4*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x25, context->r30));
RUNTIME_PPC_JUMP_LABEL(.L_80031BB8, 0x80031BB8) //this is a jump label
/*80031BB8 0002E9B8*/ PPC::Runtime::ASM::lbz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x25, context->r30));
/*80031BBC 0002E9BC*/ PPC::Runtime::ASM::extsb(context->r0, context->r4);
/*80031BC0 0002E9C0*/ PPC::Runtime::ASM::extsb(context->r3, context->r3);
/*80031BC4 0002E9C4*/ PPC::Runtime::ASM::cmpw(context->r3, context->r0);
/*80031BC8 0002E9C8*/ PPC::Runtime::ASM::beq(.L_80031C48);
/*80031BCC 0002E9CC*/ PPC::Runtime::ASM::bl(fn_80061620);
/*80031BD0 0002E9D0*/ PPC::Runtime::ASM::lbz(context->r28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x25, context->r30));
/*80031BD4 0002E9D4*/ PPC::Runtime::ASM::mr(context->r3, context->r29);
/*80031BD8 0002E9D8*/ PPC::Runtime::ASM::bl(fn_CSS_updatePlayerSelectFrame);
/*80031BDC 0002E9DC*/ PPC::Runtime::ASM::extsb(context->r0, context->r28);
/*80031BE0 0002E9E0*/ PPC::Runtime::ASM::mr(context->r3, context->r29);
/*80031BE4 0002E9E4*/ PPC::Runtime::ASM::add(context->r30, context->r31, context->r0);
/*80031BE8 0002E9E8*/ PPC::Runtime::ASM::lbz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4d, context->r30));
/*80031BEC 0002E9EC*/ PPC::Runtime::ASM::bl(fn_80135574);
/*80031BF0 0002E9F0*/ PPC::Runtime::ASM::mr(context->r3, context->r29);
/*80031BF4 0002E9F4*/ PPC::Runtime::ASM::mr(context->r4, context->r28);
/*80031BF8 0002E9F8*/ PPC::Runtime::ASM::bl(fn_80135554);
/*80031BFC 0002E9FC*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4d, context->r30));
/*80031C00 0002EA00*/ PPC::Runtime::ASM::extsb(context->r0, context->r0);
/*80031C04 0002EA04*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x4);
/*80031C08 0002EA08*/ PPC::Runtime::ASM::blt(.L_80031C20);
/*80031C0C 0002EA0C*/ PPC::Runtime::ASM::mr(context->r3, context->r29);
/*80031C10 0002EA10*/ PPC::Runtime::ASM::mr(context->r4, context->r28);
/*80031C14 0002EA14*/ PPC::Runtime::ASM::li(context->r5, 0x1);
/*80031C18 0002EA18*/ PPC::Runtime::ASM::bl(fn_80135BAC);
/*80031C1C 0002EA1C*/ PPC::Runtime::ASM::b(.L_80031C30);
RUNTIME_PPC_JUMP_LABEL(.L_80031C20, 0x80031C20) //this is a jump label
/*80031C20 0002EA20*/ PPC::Runtime::ASM::mr(context->r3, context->r29);
/*80031C24 0002EA24*/ PPC::Runtime::ASM::mr(context->r4, context->r28);
/*80031C28 0002EA28*/ PPC::Runtime::ASM::li(context->r5, 0x0);
/*80031C2C 0002EA2C*/ PPC::Runtime::ASM::bl(fn_80135BAC);
RUNTIME_PPC_JUMP_LABEL(.L_80031C30, 0x80031C30) //this is a jump label
/*80031C30 0002EA30*/ PPC::Runtime::ASM::mr(context->r3, context->r29);
/*80031C34 0002EA34*/ PPC::Runtime::ASM::bl(fn_80135B4C);
/*80031C38 0002EA38*/ PPC::Runtime::ASM::mr(context->r3, context->r29);
/*80031C3C 0002EA3C*/ PPC::Runtime::ASM::bl(fn_8002F588);
/*80031C40 0002EA40*/ PPC::Runtime::ASM::li(context->r3, 0x1);
/*80031C44 0002EA44*/ PPC::Runtime::ASM::b(.L_80031C4C);
RUNTIME_PPC_JUMP_LABEL(.L_80031C48, 0x80031C48) //this is a jump label
/*80031C48 0002EA48*/ PPC::Runtime::ASM::li(context->r3, 0x0);
RUNTIME_PPC_JUMP_LABEL(.L_80031C4C, 0x80031C4C) //this is a jump label
/*80031C4C 0002EA4C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*80031C50 0002EA50*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*80031C54 0002EA54*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*80031C58 0002EA58*/ PPC::Runtime::ASM::lwz(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80031C5C 0002EA5C*/ PPC::Runtime::ASM::lwz(context->r28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*80031C60 0002EA60*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80031C64 0002EA64*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x20);
/*80031C68 0002EA68*/ PPC::Runtime::ASM::blr();
}