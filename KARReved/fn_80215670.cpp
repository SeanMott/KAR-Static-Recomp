//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_801FF754.hpp"
#include "fn_801FED74.hpp"
#include "fn_80208008.hpp"
#include "fn_802156BC.hpp"



void fn_80215670(PPC::Runtime::GCContext* context)
{
/*80215670 00212470*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*80215674 00212474*/ PPC::Runtime::ASM::mflr(context->r0);
/*80215678 00212478*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8021567C 0021247C*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*80215680 00212480*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*80215684 00212484*/ PPC::Runtime::ASM::bl(fn_801FF754);
/*80215688 00212488*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*8021568C 0021248C*/ PPC::Runtime::ASM::bl(fn_801FED74);
/*80215690 00212490*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*80215694 00212494*/ PPC::Runtime::ASM::bl(fn_80208008);
/*80215698 00212498*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*8021569C 0021249C*/ PPC::Runtime::ASM::beq(.L_802156A8);
/*802156A0 002124A0*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*802156A4 002124A4*/ PPC::Runtime::ASM::bl(fn_802156BC);
RUNTIME_PPC_JUMP_LABEL(.L_802156A8, 0x802156A8) //this is a jump label
/*802156A8 002124A8*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*802156AC 002124AC*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*802156B0 002124B0*/ PPC::Runtime::ASM::mtlr(context->r0);
/*802156B4 002124B4*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*802156B8 002124B8*/ PPC::Runtime::ASM::blr();
}