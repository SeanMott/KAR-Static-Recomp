//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_80195650.hpp"



void fn_801A1170(PPC::Runtime::GCContext* context)
{
/*801A1170 0019DF70*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x20, context->r1));
/*801A1174 0019DF74*/ PPC::Runtime::ASM::mflr(context->r0);
/*801A1178 0019DF78*/ PPC::Runtime::ASM::lis(context->r5, 0x2);
/*801A117C 0019DF7C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*801A1180 0019DF80*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*801A1184 0019DF84*/ PPC::Runtime::ASM::addi(context->r31, context->r5, 0x8e);
/*801A1188 0019DF88*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*801A118C 0019DF8C*/ PPC::Runtime::ASM::mr(context->r30, context->r4);
/*801A1190 0019DF90*/ PPC::Runtime::ASM::stw(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801A1194 0019DF94*/ PPC::Runtime::ASM::mr(context->r29, context->r3);
/*801A1198 0019DF98*/ PPC::Runtime::ASM::li(context->r3, 0x2);
/*801A119C 0019DF9C*/ PPC::Runtime::ASM::bl(fn_HSD_Randi);
/*801A11A0 0019DFA0*/ PPC::Runtime::ASM::add(context->r31, context->r31, context->r3);
/*801A11A4 0019DFA4*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E1248 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*801A11A8 0019DFA8*/ PPC::Runtime::ASM::mr(context->r3, context->r29);
/*801A11AC 0019DFAC*/ PPC::Runtime::ASM::mr(context->r4, context->r31);
/*801A11B0 0019DFB0*/ PPC::Runtime::ASM::bl(fn_80195650);
/*801A11B4 0019DFB4*/ PPC::Runtime::ASM::li(context->r0, 0x8);
/*801A11B8 0019DFB8*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r30));
/*801A11BC 0019DFBC*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*801A11C0 0019DFC0*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*801A11C4 0019DFC4*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*801A11C8 0019DFC8*/ PPC::Runtime::ASM::lwz(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801A11CC 0019DFCC*/ PPC::Runtime::ASM::mtlr(context->r0);
/*801A11D0 0019DFD0*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x20);
/*801A11D4 0019DFD4*/ PPC::Runtime::ASM::blr();
}