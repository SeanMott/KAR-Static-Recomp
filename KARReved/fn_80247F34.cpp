//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_800D2F80.hpp"
#include "fn_80103AAC.hpp"



void fn_80247F34(PPC::Runtime::GCContext* context)
{
/*80247F34 00244D34*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x20, context->r1));
/*80247F38 00244D38*/ PPC::Runtime::ASM::mflr(context->r0);
/*80247F3C 00244D3C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*80247F40 00244D40*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*80247F44 00244D44*/ PPC::Runtime::ASM::mr(context->r31, context->r5);
/*80247F48 00244D48*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*80247F4C 00244D4C*/ PPC::Runtime::ASM::mr(context->r30, context->r4);
/*80247F50 00244D50*/ PPC::Runtime::ASM::stw(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80247F54 00244D54*/ PPC::Runtime::ASM::mr(context->r29, context->r3);
/*80247F58 00244D58*/ PPC::Runtime::ASM::bl(fn_800D2F80);
/*80247F5C 00244D5C*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*80247F60 00244D60*/ PPC::Runtime::ASM::beq(.L_80247F90);
/*80247F64 00244D64*/ PPC::Runtime::ASM::lwz(context->r3, STRUCT_BYTE4_COUNT_1grGlobalP @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80247F68 00244D68*/ PPC::Runtime::ASM::slwi(context->r0, context->r29, 6);
/*80247F6C 00244D6C*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x5c, context->r3));
/*80247F70 00244D70*/ PPC::Runtime::ASM::add(context->r3, context->r3, context->r0);
/*80247F74 00244D74*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x38, context->r3));
/*80247F78 00244D78*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x90, context->r3));
/*80247F7C 00244D7C*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*80247F80 00244D80*/ PPC::Runtime::ASM::beq(.L_80247F90);
/*80247F84 00244D84*/ PPC::Runtime::ASM::mr(context->r4, context->r30);
/*80247F88 00244D88*/ PPC::Runtime::ASM::mr(context->r5, context->r31);
/*80247F8C 00244D8C*/ PPC::Runtime::ASM::bl(fn_80103AAC);
RUNTIME_PPC_JUMP_LABEL(.L_80247F90, 0x80247F90) //this is a jump label
/*80247F90 00244D90*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*80247F94 00244D94*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*80247F98 00244D98*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*80247F9C 00244D9C*/ PPC::Runtime::ASM::lwz(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80247FA0 00244DA0*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80247FA4 00244DA4*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x20);
/*80247FA8 00244DA8*/ PPC::Runtime::ASM::blr();
}