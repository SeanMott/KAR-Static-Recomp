//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_80054414.hpp"



void fn_8023D914(PPC::Runtime::GCContext* context)
{
/*8023D914 0023A714*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*8023D918 0023A718*/ PPC::Runtime::ASM::mflr(context->r0);
/*8023D91C 0023A71C*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E2AD4 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8023D920 0023A720*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8023D924 0023A724*/ PPC::Runtime::ASM::mr(context->r0, context->r4);
/*8023D928 0023A728*/ PPC::Runtime::ASM::mr(context->r4, context->r5);
/*8023D92C 0023A72C*/ PPC::Runtime::ASM::mr(context->r5, context->r6);
/*8023D930 0023A730*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8023D934 0023A734*/ PPC::Runtime::ASM::mr(context->r6, context->r0);
/*8023D938 0023A738*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x5c, context->r3));
/*8023D93C 0023A73C*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r3));
/*8023D940 0023A740*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r3));
/*8023D944 0023A744*/ PPC::Runtime::ASM::bl(fn_80054414);
/*8023D948 0023A748*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*8023D94C 0023A74C*/ PPC::Runtime::ASM::sth(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1e, context->r31));
/*8023D950 0023A750*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8023D954 0023A754*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8023D958 0023A758*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8023D95C 0023A75C*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*8023D960 0023A760*/ PPC::Runtime::ASM::blr();
}