//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_80250340.hpp"
#include "fn_8024F488.hpp"



void fn_80259EB0(PPC::Runtime::GCContext* context)
{
/*80259EB0 00256CB0*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*80259EB4 00256CB4*/ PPC::Runtime::ASM::mflr(context->r0);
/*80259EB8 00256CB8*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80259EBC 00256CBC*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*80259EC0 00256CC0*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*80259EC4 00256CC4*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r3));
/*80259EC8 00256CC8*/ PPC::Runtime::ASM::bl(fn_80250340);
/*80259ECC 00256CCC*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E2E48 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80259ED0 00256CD0*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*80259ED4 00256CD4*/ PPC::Runtime::ASM::lfs(context->f2, STRUCT_FLOAT_COUNT_1805E2E4C @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80259ED8 00256CD8*/ PPC::Runtime::ASM::li(context->r4, 0x4);
/*80259EDC 00256CDC*/ PPC::Runtime::ASM::fmr(context->f3, context->f1);
/*80259EE0 00256CE0*/ PPC::Runtime::ASM::li(context->r5, 0x0);
/*80259EE4 00256CE4*/ PPC::Runtime::ASM::bl(fn_8024F488);
/*80259EE8 00256CE8*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80259EEC 00256CEC*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*80259EF0 00256CF0*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80259EF4 00256CF4*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*80259EF8 00256CF8*/ PPC::Runtime::ASM::blr();
}