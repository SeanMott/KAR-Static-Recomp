//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_80114154.hpp"
#include "fn_800EE660.hpp"



void fn_801116D4(PPC::Runtime::GCContext* context)
{
/*801116D4 0010E4D4*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*801116D8 0010E4D8*/ PPC::Runtime::ASM::mflr(context->r0);
/*801116DC 0010E4DC*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801116E0 0010E4E0*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*801116E4 0010E4E4*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*801116E8 0010E4E8*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*801116EC 0010E4EC*/ PPC::Runtime::ASM::stw(context->r0, STRUCT_BYTE4_COUNT_1805DD740 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*801116F0 0010E4F0*/ PPC::Runtime::ASM::bl(fn_80114154);
/*801116F4 0010E4F4*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*801116F8 0010E4F8*/ PPC::Runtime::ASM::bl(fn_800EE660);
/*801116FC 0010E4FC*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80111700 0010E500*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*80111704 0010E504*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80111708 0010E508*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*8011170C 0010E50C*/ PPC::Runtime::ASM::blr();
}