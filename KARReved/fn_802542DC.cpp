//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_80111A60.hpp"



void fn_802542DC(PPC::Runtime::GCContext* context)
{
/*802542DC 002510DC*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*802542E0 002510E0*/ PPC::Runtime::ASM::mflr(context->r0);
/*802542E4 002510E4*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*802542E8 002510E8*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*802542EC 002510EC*/ PPC::Runtime::ASM::lwz(context->r3, STRUCT_BYTE4_COUNT_1NULL_2 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*802542F0 002510F0*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c4, context->r3));
/*802542F4 002510F4*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*802542F8 002510F8*/ PPC::Runtime::ASM::beq(.L_80254304);
/*802542FC 002510FC*/ PPC::Runtime::ASM::bl(fn_80111A60);
/*80254300 00251100*/ PPC::Runtime::ASM::li(context->r0, 0x1);
RUNTIME_PPC_JUMP_LABEL(.L_80254304, 0x80254304) //this is a jump label
/*80254304 00251104*/ PPC::Runtime::ASM::mr(context->r3, context->r0);
/*80254308 00251108*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8025430C 0025110C*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80254310 00251110*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*80254314 00251114*/ PPC::Runtime::ASM::blr();
}