//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_802AAB18.hpp"
#include "fn_802AAAA8.hpp"
#include "fn_802AA9C8.hpp"
#include "fn_80285130.hpp"



void fn_802AA930(PPC::Runtime::GCContext* context)
{
/*802AA930 002A7730*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*802AA934 002A7734*/ PPC::Runtime::ASM::mflr(context->r0);
/*802AA938 002A7738*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*802AA93C 002A773C*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*802AA940 002A7740*/ PPC::Runtime::ASM::mr(context->r31, context->r4);
/*802AA944 002A7744*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/* 802AA948 002A7748  7C 7E 1B 79 */ mr. context->r30 , context->r3
/*802AA94C 002A774C*/ PPC::Runtime::ASM::beq(.L_802AA9AC);
/*802AA950 002A7750*/ PPC::Runtime::ASM::lis(context->r4, lbl_804C11F8 @ Get_MemoryOffset_HighBit);
/*802AA954 002A7754*/ PPC::Runtime::ASM::addi(context->r3, context->r30, 0x504);
/*802AA958 002A7758*/ PPC::Runtime::ASM::addi(context->r6, context->r4, lbl_804C11F8 @ Get_MemoryOffset_LowBit);
/*802AA95C 002A775C*/ PPC::Runtime::ASM::li(context->r4, -0x1);
/*802AA960 002A7760*/ PPC::Runtime::ASM::stw(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r30));
/*802AA964 002A7764*/ PPC::Runtime::ASM::addi(context->r5, context->r6, 0x10);
/*802AA968 002A7768*/ PPC::Runtime::ASM::addi(context->r0, context->r6, 0x58);
/*802AA96C 002A776C*/ PPC::Runtime::ASM::stw(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r30));
/*802AA970 002A7770*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x38, context->r30));
/*802AA974 002A7774*/ PPC::Runtime::ASM::bl(fn_802AAB18);
/*802AA978 002A7778*/ PPC::Runtime::ASM::addi(context->r3, context->r30, 0x358);
/*802AA97C 002A777C*/ PPC::Runtime::ASM::li(context->r4, -0x1);
/*802AA980 002A7780*/ PPC::Runtime::ASM::bl(fn_802AAAA8);
/*802AA984 002A7784*/ PPC::Runtime::ASM::addi(context->r3, context->r30, 0x1ac);
/*802AA988 002A7788*/ PPC::Runtime::ASM::li(context->r4, -0x1);
/*802AA98C 002A778C*/ PPC::Runtime::ASM::bl(fn_802AA9C8);
/*802AA990 002A7790*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*802AA994 002A7794*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*802AA998 002A7798*/ PPC::Runtime::ASM::bl(fn_80285130);
/*802AA99C 002A779C*/ PPC::Runtime::ASM::extsh.(context->r0, context->r31);
/*802AA9A0 002A77A0*/ PPC::Runtime::ASM::ble(.L_802AA9AC);
/*802AA9A4 002A77A4*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*802AA9A8 002A77A8*/ PPC::Runtime::ASM::bl(fn_8038CB78);
RUNTIME_PPC_JUMP_LABEL(.L_802AA9AC, 0x802AA9AC) //this is a jump label
/*802AA9AC 002A77AC*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*802AA9B0 002A77B0*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*802AA9B4 002A77B4*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*802AA9B8 002A77B8*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*802AA9BC 002A77BC*/ PPC::Runtime::ASM::mtlr(context->r0);
/*802AA9C0 002A77C0*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*802AA9C4 002A77C4*/ PPC::Runtime::ASM::blr();
}