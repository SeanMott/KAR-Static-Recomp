//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_80250340.hpp"
#include "fn_8024F488.hpp"



void fn_8025F940(PPC::Runtime::GCContext* context)
{
/*8025F940 0025C740*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*8025F944 0025C744*/ PPC::Runtime::ASM::mflr(context->r0);
/*8025F948 0025C748*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8025F94C 0025C74C*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8025F950 0025C750*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*8025F954 0025C754*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r3));
/*8025F958 0025C758*/ PPC::Runtime::ASM::bl(fn_80250340);
/*8025F95C 0025C75C*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E2F50 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8025F960 0025C760*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*8025F964 0025C764*/ PPC::Runtime::ASM::lfs(context->f2, STRUCT_FLOAT_COUNT_1805E2F54 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8025F968 0025C768*/ PPC::Runtime::ASM::li(context->r4, 0x4);
/*8025F96C 0025C76C*/ PPC::Runtime::ASM::fmr(context->f3, context->f1);
/*8025F970 0025C770*/ PPC::Runtime::ASM::li(context->r5, 0x0);
/*8025F974 0025C774*/ PPC::Runtime::ASM::bl(fn_8024F488);
/*8025F978 0025C778*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8025F97C 0025C77C*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8025F980 0025C780*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8025F984 0025C784*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*8025F988 0025C788*/ PPC::Runtime::ASM::blr();
}