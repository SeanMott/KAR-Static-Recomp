//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn_80071180(PPC::Runtime::GCContext* context)
{
/*80071180 0006DF80*/ PPC::Runtime::ASM::lis(context->r9, StructValues_14 @ Get_MemoryOffset_HighBit);
/*80071184 0006DF84*/ PPC::Runtime::ASM::lis(context->r8, StructValues_13 @ Get_MemoryOffset_HighBit);
/*80071188 0006DF88*/ PPC::Runtime::ASM::slwi(context->r10, context->r5, 4);
/*8007118C 0006DF8C*/ PPC::Runtime::ASM::slwi(context->r6, context->r6, 2);
/*80071190 0006DF90*/ PPC::Runtime::ASM::addi(context->r0, context->r9, StructValues_14 @ Get_MemoryOffset_LowBit);
/*80071194 0006DF94*/ PPC::Runtime::ASM::addi(context->r5, context->r8, StructValues_13 @ Get_MemoryOffset_LowBit);
/*80071198 0006DF98*/ PPC::Runtime::ASM::add(context->r8, context->r0, context->r10);
/*8007119C 0006DF9C*/ PPC::Runtime::ASM::lwzx(context->r0, context->r8, context->r6);
/*800711A0 0006DFA0*/ PPC::Runtime::ASM::mulli(context->r0, context->r0, 0xc);
/*800711A4 0006DFA4*/ PPC::Runtime::ASM::lwzx(context->r0, context->r5, context->r0);
/*800711A8 0006DFA8*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x0);
/*800711AC 0006DFAC*/ PPC::Runtime::ASM::bne(.L_800711B8);
/*800711B0 0006DFB0*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*800711B4 0006DFB4*/ PPC::Runtime::ASM::b(.L_800711BC);
RUNTIME_PPC_JUMP_LABEL(.L_800711B8, 0x800711B8) //this is a jump label
/*800711B8 0006DFB8*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r4));
RUNTIME_PPC_JUMP_LABEL(.L_800711BC, 0x800711BC) //this is a jump label
/*800711BC 0006DFBC*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r7));
/*800711C0 0006DFC0*/ PPC::Runtime::ASM::lis(context->r5, StructValues_13 @ Get_MemoryOffset_HighBit);
/*800711C4 0006DFC4*/ PPC::Runtime::ASM::addi(context->r5, context->r5, StructValues_13 @ Get_MemoryOffset_LowBit);
/*800711C8 0006DFC8*/ PPC::Runtime::ASM::lwzx(context->r0, context->r8, context->r6);
/*800711CC 0006DFCC*/ PPC::Runtime::ASM::mulli(context->r0, context->r0, 0xc);
/*800711D0 0006DFD0*/ PPC::Runtime::ASM::add(context->r5, context->r5, context->r0);
/*800711D4 0006DFD4*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r5));
/*800711D8 0006DFD8*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x0);
/*800711DC 0006DFDC*/ PPC::Runtime::ASM::bne(.L_800711E8);
/*800711E0 0006DFE0*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r3));
/*800711E4 0006DFE4*/ PPC::Runtime::ASM::b(.L_800711EC);
RUNTIME_PPC_JUMP_LABEL(.L_800711E8, 0x800711E8) //this is a jump label
/*800711E8 0006DFE8*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r4));
RUNTIME_PPC_JUMP_LABEL(.L_800711EC, 0x800711EC) //this is a jump label
/*800711EC 0006DFEC*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r7));
/*800711F0 0006DFF0*/ PPC::Runtime::ASM::lis(context->r5, StructValues_13 @ Get_MemoryOffset_HighBit);
/*800711F4 0006DFF4*/ PPC::Runtime::ASM::addi(context->r5, context->r5, StructValues_13 @ Get_MemoryOffset_LowBit);
/*800711F8 0006DFF8*/ PPC::Runtime::ASM::lwzx(context->r0, context->r8, context->r6);
/*800711FC 0006DFFC*/ PPC::Runtime::ASM::mulli(context->r0, context->r0, 0xc);
/*80071200 0006E000*/ PPC::Runtime::ASM::add(context->r5, context->r5, context->r0);
/*80071204 0006E004*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r5));
/*80071208 0006E008*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x0);
/*8007120C 0006E00C*/ PPC::Runtime::ASM::bne(.L_80071218);
/*80071210 0006E010*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r3));
/*80071214 0006E014*/ PPC::Runtime::ASM::b(.L_8007121C);
RUNTIME_PPC_JUMP_LABEL(.L_80071218, 0x80071218) //this is a jump label
/*80071218 0006E018*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r4));
RUNTIME_PPC_JUMP_LABEL(.L_8007121C, 0x8007121C) //this is a jump label
/*8007121C 0006E01C*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r7));
/*80071220 0006E020*/ PPC::Runtime::ASM::blr();
}