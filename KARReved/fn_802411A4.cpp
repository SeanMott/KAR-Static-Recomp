//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_80241698.hpp"
#include "fn_80071224.hpp"
#include "fn_8007125C.hpp"



void fn_802411A4(PPC::Runtime::GCContext* context)
{
/*802411A4 0023DFA4*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*802411A8 0023DFA8*/ PPC::Runtime::ASM::mflr(context->r0);
/*802411AC 0023DFAC*/ PPC::Runtime::ASM::lis(context->r3, lbl_8055DBC8 @ Get_MemoryOffset_HighBit);
/*802411B0 0023DFB0*/ PPC::Runtime::ASM::li(context->r4, 0x350);
/*802411B4 0023DFB4*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*802411B8 0023DFB8*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*802411BC 0023DFBC*/ PPC::Runtime::ASM::li(context->r5, 0x4);
/*802411C0 0023DFC0*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*802411C4 0023DFC4*/ PPC::Runtime::ASM::addi(context->r31, context->r3, lbl_8055DBC8 @ Get_MemoryOffset_LowBit);
/*802411C8 0023DFC8*/ PPC::Runtime::ASM::addi(context->r3, context->r31, 0x0);
/*802411CC 0023DFCC*/ PPC::Runtime::ASM::stw(context->r0, STRUCT_BYTE4_COUNT_1NULL5 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*802411D0 0023DFD0*/ PPC::Runtime::ASM::bl(fn_HSD_ObjAllocInit);
/*802411D4 0023DFD4*/ PPC::Runtime::ASM::addi(context->r3, context->r31, 0x2c);
/*802411D8 0023DFD8*/ PPC::Runtime::ASM::li(context->r4, 0x4c);
/*802411DC 0023DFDC*/ PPC::Runtime::ASM::li(context->r5, 0x4);
/*802411E0 0023DFE0*/ PPC::Runtime::ASM::bl(fn_HSD_ObjAllocInit);
/*802411E4 0023DFE4*/ PPC::Runtime::ASM::addi(context->r3, context->r31, 0x58);
/*802411E8 0023DFE8*/ PPC::Runtime::ASM::li(context->r4, 0x16c);
/*802411EC 0023DFEC*/ PPC::Runtime::ASM::li(context->r5, 0x4);
/*802411F0 0023DFF0*/ PPC::Runtime::ASM::bl(fn_HSD_ObjAllocInit);
/*802411F4 0023DFF4*/ PPC::Runtime::ASM::addi(context->r3, context->r31, 0x84);
/*802411F8 0023DFF8*/ PPC::Runtime::ASM::li(context->r4, 0x30);
/*802411FC 0023DFFC*/ PPC::Runtime::ASM::li(context->r5, 0x4);
/*80241200 0023E000*/ PPC::Runtime::ASM::bl(fn_HSD_ObjAllocInit);
/*80241204 0023E004*/ PPC::Runtime::ASM::bl(fn_80241698);
/*80241208 0023E008*/ PPC::Runtime::ASM::bl(fn_80071224);
/*8024120C 0023E00C*/ PPC::Runtime::ASM::bl(fn_8007125C);
/*80241210 0023E010*/ PPC::Runtime::ASM::stw(context->r3, STRUCT_BYTE4_COUNT_1NULL6 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80241214 0023E014*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80241218 0023E018*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8024121C 0023E01C*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80241220 0023E020*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*80241224 0023E024*/ PPC::Runtime::ASM::blr();
}