//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_80468170.hpp"
#include "fn_80468A9C.hpp"
#include "fn_Callback0.hpp"
#include "fn_Callback1.hpp"
#include "fn_Callback0.hpp"
#include "fn_Callback1.hpp"
#include "fn_80468170.hpp"



void fn_IFMute(PPC::Runtime::GCContext* context)
{
/*80471C18 0046EA18*/ PPC::Runtime::ASM::mflr(context->r0);
/*80471C1C 0046EA1C*/ PPC::Runtime::ASM::lis(context->r4, STRUCT_BYTE4_COUNT_1805BDD20 @ Get_MemoryOffset_HighBit);
/*80471C20 0046EA20*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r1));
/*80471C24 0046EA24*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x18, context->r1));
/*80471C28 0046EA28*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80471C2C 0046EA2C*/ PPC::Runtime::ASM::lwz(context->r31, StructValues_54 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80471C30 0046EA30*/ PPC::Runtime::ASM::stw(context->r3, StructValues_54 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80471C34 0046EA34*/ PPC::Runtime::ASM::lwz(context->r0, STRUCT_BYTE4_COUNT_1805BDD20 @ Get_MemoryOffset_LowBit ( context->r4 ));
/*80471C38 0046EA38*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x5);
/*80471C3C 0046EA3C*/ PPC::Runtime::ASM::bge(.L_80471C94);
/*80471C40 0046EA40*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x0);
/*80471C44 0046EA44*/ PPC::Runtime::ASM::bge(.L_80471C4C);
/*80471C48 0046EA48*/ PPC::Runtime::ASM::b(.L_80471C94);
RUNTIME_PPC_JUMP_LABEL(.L_80471C4C, 0x80471C4C) //this is a jump label
/*80471C4C 0046EA4C*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*80471C50 0046EA50*/ PPC::Runtime::ASM::beq(.L_80471C70);
/*80471C54 0046EA54*/ PPC::Runtime::ASM::cmpwi(context->r31, 0x0);
/*80471C58 0046EA58*/ PPC::Runtime::ASM::bne(.L_80471C70);
/*80471C5C 0046EA5C*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*80471C60 0046EA60*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*80471C64 0046EA64*/ PPC::Runtime::ASM::bl(fn_80468170);
/*80471C68 0046EA68*/ PPC::Runtime::ASM::bl(fn_80468A9C);
/*80471C6C 0046EA6C*/ PPC::Runtime::ASM::b(.L_80471C94);
RUNTIME_PPC_JUMP_LABEL(.L_80471C70, 0x80471C70) //this is a jump label
/*80471C70 0046EA70*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*80471C74 0046EA74*/ PPC::Runtime::ASM::bne(.L_80471C94);
/*80471C78 0046EA78*/ PPC::Runtime::ASM::cmpwi(context->r31, 0x0);
/*80471C7C 0046EA7C*/ PPC::Runtime::ASM::beq(.L_80471C94);
/*80471C80 0046EA80*/ PPC::Runtime::ASM::lis(context->r3, fn_Callback0 @ Get_MemoryOffset_HighBit);
/*80471C84 0046EA84*/ PPC::Runtime::ASM::lis(context->r4, fn_Callback1 @ Get_MemoryOffset_HighBit);
/*80471C88 0046EA88*/ PPC::Runtime::ASM::addi(context->r3, context->r3, fn_Callback0 @ Get_MemoryOffset_LowBit);
/*80471C8C 0046EA8C*/ PPC::Runtime::ASM::addi(context->r4, context->r4, fn_Callback1 @ Get_MemoryOffset_LowBit);
/*80471C90 0046EA90*/ PPC::Runtime::ASM::bl(fn_80468170);
RUNTIME_PPC_JUMP_LABEL(.L_80471C94, 0x80471C94) //this is a jump label
/*80471C94 0046EA94*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*80471C98 0046EA98*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*80471C9C 0046EA9C*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80471CA0 0046EAA0*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x18);
/*80471CA4 0046EAA4*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80471CA8 0046EAA8*/ PPC::Runtime::ASM::blr();
}