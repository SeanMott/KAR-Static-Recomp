//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_FuncDoesShit_5.hpp"
#include "fn_80131264.hpp"
#include "fn_80059520.hpp"



void fn_80169448(PPC::Runtime::GCContext* context)
{
/*80169448 00166248*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*8016944C 0016624C*/ PPC::Runtime::ASM::mflr(context->r0);
/*80169450 00166250*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80169454 00166254*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*80169458 00166258*/ PPC::Runtime::ASM::bl(fn_FuncDoesShit_5);
/*8016945C 0016625C*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*80169460 00166260*/ PPC::Runtime::ASM::bl(fn_80131264);
/*80169464 00166264*/ PPC::Runtime::ASM::lis(context->r4, lbl_804AC958 @ Get_MemoryOffset_HighBit);
/*80169468 00166268*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*8016946C 0016626C*/ PPC::Runtime::ASM::addi(context->r5, context->r4, lbl_804AC958 @ Get_MemoryOffset_LowBit);
/*80169470 00166270*/ PPC::Runtime::ASM::li(context->r6, 0x0);
/*80169474 00166274*/ PPC::Runtime::ASM::addi(context->r4, context->r31, 0xabc);
/*80169478 00166278*/ PPC::Runtime::ASM::crclr(context->cr1eq);
/*8016947C 0016627C*/ PPC::Runtime::ASM::bl(fn_80059520);
/*80169480 00166280*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80169484 00166284*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*80169488 00166288*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8016948C 0016628C*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*80169490 00166290*/ PPC::Runtime::ASM::blr();
}