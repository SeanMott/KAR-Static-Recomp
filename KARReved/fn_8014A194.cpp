//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_FuncDoesShit_5.hpp"



void fn_8014A194(PPC::Runtime::GCContext* context)
{
/*8014A194 00146F94*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x20, context->r1));
/*8014A198 00146F98*/ PPC::Runtime::ASM::mflr(context->r0);
/*8014A19C 00146F9C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*8014A1A0 00146FA0*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*8014A1A4 00146FA4*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*8014A1A8 00146FA8*/ PPC::Runtime::ASM::stw(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8014A1AC 00146FAC*/ PPC::Runtime::ASM::mr(context->r29, context->r3);
/*8014A1B0 00146FB0*/ PPC::Runtime::ASM::bl(fn_FuncDoesShit_5);
/*8014A1B4 00146FB4*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*8014A1B8 00146FB8*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r29));
/*8014A1BC 00146FBC*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r29));
/*8014A1C0 00146FC0*/ PPC::Runtime::ASM::bl(fn_HSD_JObjAnimAll?);
/*8014A1C4 00146FC4*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r30));
/*8014A1C8 00146FC8*/ PPC::Runtime::ASM::extsb(context->r0, context->r0);
/*8014A1CC 00146FCC*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x1);
/*8014A1D0 00146FD0*/ PPC::Runtime::ASM::bne(.L_8014A208);
/*8014A1D4 00146FD4*/ PPC::Runtime::ASM::lbz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x15, context->r30));
/*8014A1D8 00146FD8*/ PPC::Runtime::ASM::subi(context->r3, context->r3, 0x1);
/*8014A1DC 00146FDC*/ PPC::Runtime::ASM::extsb.(context->r0, context->r3);
/*8014A1E0 00146FE0*/ PPC::Runtime::ASM::stb(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x15, context->r30));
/*8014A1E4 00146FE4*/ PPC::Runtime::ASM::bgt(.L_8014A250);
/*8014A1E8 00146FE8*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r30));
/*8014A1EC 00146FEC*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E0558 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8014A1F0 00146FF0*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x7c, context->r3));
/*8014A1F4 00146FF4*/ PPC::Runtime::ASM::bl(fn_HSD_AObjSetRate);
/*8014A1F8 00146FF8*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*8014A1FC 00146FFC*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r30));
/*8014A200 00147000*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x15, context->r30));
/*8014A204 00147004*/ PPC::Runtime::ASM::b(.L_8014A250);
RUNTIME_PPC_JUMP_LABEL(.L_8014A208, 0x8014A208) //this is a jump label
/*8014A208 00147008*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x2);
/*8014A20C 0014700C*/ PPC::Runtime::ASM::bne(.L_8014A250);
/*8014A210 00147010*/ PPC::Runtime::ASM::lbz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x15, context->r30));
/*8014A214 00147014*/ PPC::Runtime::ASM::subi(context->r3, context->r3, 0x1);
/*8014A218 00147018*/ PPC::Runtime::ASM::extsb.(context->r0, context->r3);
/*8014A21C 0014701C*/ PPC::Runtime::ASM::stb(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x15, context->r30));
/*8014A220 00147020*/ PPC::Runtime::ASM::bgt(.L_8014A250);
/*8014A224 00147024*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r30));
/*8014A228 00147028*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E0558 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8014A22C 0014702C*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x7c, context->r3));
/*8014A230 00147030*/ PPC::Runtime::ASM::bl(fn_HSD_AObjSetRate);
/*8014A234 00147034*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*8014A238 00147038*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r30));
/*8014A23C 0014703C*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x15, context->r30));
/*8014A240 00147040*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x370, context->r31));
/*8014A244 00147044*/ PPC::Runtime::ASM::bl(fn_80428F64);
/*8014A248 00147048*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*8014A24C 0014704C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x370, context->r31));
RUNTIME_PPC_JUMP_LABEL(.L_8014A250, 0x8014A250) //this is a jump label
/*8014A250 00147050*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*8014A254 00147054*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*8014A258 00147058*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*8014A25C 0014705C*/ PPC::Runtime::ASM::lwz(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8014A260 00147060*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8014A264 00147064*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x20);
/*8014A268 00147068*/ PPC::Runtime::ASM::blr();
}