//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_chargeLogic?.hpp"
#include "fn_801E10E8.hpp"



void fn_801EE84C(PPC::Runtime::GCContext* context)
{
/*801EE84C 001EB64C*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*801EE850 001EB650*/ PPC::Runtime::ASM::mflr(context->r0);
/*801EE854 001EB654*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E1EF0 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*801EE858 001EB658*/ PPC::Runtime::ASM::li(context->r4, 0x9);
/*801EE85C 001EB65C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801EE860 001EB660*/ PPC::Runtime::ASM::li(context->r5, -0x1);
/*801EE864 001EB664*/ PPC::Runtime::ASM::lfs(context->f2, STRUCT_FLOAT_COUNT_1805E1EF4 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*801EE868 001EB668*/ PPC::Runtime::ASM::li(context->r6, 0x0);
/*801EE86C 001EB66C*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*801EE870 001EB670*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*801EE874 001EB674*/ PPC::Runtime::ASM::bl(fn_chargeLogic?);
/*801EE878 001EB678*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*801EE87C 001EB67C*/ PPC::Runtime::ASM::bl(fn_801E10E8);
/*801EE880 001EB680*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801EE884 001EB684*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*801EE888 001EB688*/ PPC::Runtime::ASM::mtlr(context->r0);
/*801EE88C 001EB68C*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*801EE890 001EB690*/ PPC::Runtime::ASM::blr();
}