//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn_800AF1F4(PPC::Runtime::GCContext* context)
{
/*800AF1F4 000ABFF4*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*800AF1F8 000ABFF8*/ PPC::Runtime::ASM::mflr(context->r0);
/*800AF1FC 000ABFFC*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x4);
/*800AF200 000AC000*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*800AF204 000AC004*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*800AF208 000AC008*/ PPC::Runtime::ASM::bne(.L_800AF224);
/*800AF20C 000AC00C*/ PPC::Runtime::ASM::lis(context->r3, STRUCT_BYTE4_COUNT_180557108 @ Get_MemoryOffset_HighBit);
/*800AF210 000AC010*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*800AF214 000AC014*/ PPC::Runtime::ASM::addi(context->r3, context->r3, STRUCT_BYTE4_COUNT_180557108 @ Get_MemoryOffset_LowBit);
/*800AF218 000AC018*/ PPC::Runtime::ASM::li(context->r4, 0x1);
/*800AF21C 000AC01C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r3));
/*800AF220 000AC020*/ PPC::Runtime::ASM::b(.L_800AF238);
RUNTIME_PPC_JUMP_LABEL(.L_800AF224, 0x800AF224) //this is a jump label
/*800AF224 000AC024*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x2);
/*800AF228 000AC028*/ PPC::Runtime::ASM::beq(.L_800AF234);
/*800AF22C 000AC02C*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x3);
/*800AF230 000AC030*/ PPC::Runtime::ASM::bne(.L_800AF238);
RUNTIME_PPC_JUMP_LABEL(.L_800AF234, 0x800AF234) //this is a jump label
/*800AF234 000AC034*/ PPC::Runtime::ASM::li(context->r4, 0x1);
RUNTIME_PPC_JUMP_LABEL(.L_800AF238, 0x800AF238) //this is a jump label
/*800AF238 000AC038*/ PPC::Runtime::ASM::cmpwi(context->r4, 0x0);
/*800AF23C 000AC03C*/ PPC::Runtime::ASM::beq(.L_800AF28C);
/*800AF240 000AC040*/ PPC::Runtime::ASM::lis(context->r3, STRUCT_BYTE4_COUNT_180557108 @ Get_MemoryOffset_HighBit);
/*800AF244 000AC044*/ PPC::Runtime::ASM::addi(context->r4, context->r3, STRUCT_BYTE4_COUNT_180557108 @ Get_MemoryOffset_LowBit);
/*800AF248 000AC048*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r4));
/*800AF24C 000AC04C*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*800AF250 000AC050*/ PPC::Runtime::ASM::bge(.L_800AF260);
/*800AF254 000AC054*/ PPC::Runtime::ASM::addi(context->r0, context->r3, 0x168);
/*800AF258 000AC058*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r4));
/*800AF25C 000AC05C*/ PPC::Runtime::ASM::b(.L_800AF270);
RUNTIME_PPC_JUMP_LABEL(.L_800AF260, 0x800AF260) //this is a jump label
/*800AF260 000AC060*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x168);
/*800AF264 000AC064*/ PPC::Runtime::ASM::ble(.L_800AF270);
/*800AF268 000AC068*/ PPC::Runtime::ASM::subi(context->r0, context->r3, 0x168);
/*800AF26C 000AC06C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r4));
RUNTIME_PPC_JUMP_LABEL(.L_800AF270, 0x800AF270) //this is a jump label
/*800AF270 000AC070*/ PPC::Runtime::ASM::lis(context->r3, STRUCT_BYTE4_COUNT_180557108 @ Get_MemoryOffset_HighBit);
/*800AF274 000AC074*/ PPC::Runtime::ASM::addi(context->r3, context->r3, STRUCT_BYTE4_COUNT_180557108 @ Get_MemoryOffset_LowBit);
/*800AF278 000AC078*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r3));
/*800AF27C 000AC07C*/ PPC::Runtime::ASM::cmpwi(context->r3, -0x1);
/*800AF280 000AC080*/ PPC::Runtime::ASM::beq(.L_800AF28C);
/*800AF284 000AC084*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r4));
/*800AF288 000AC088*/ PPC::Runtime::ASM::bl(fn_80442FA4);
RUNTIME_PPC_JUMP_LABEL(.L_800AF28C, 0x800AF28C) //this is a jump label
/*800AF28C 000AC08C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*800AF290 000AC090*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*800AF294 000AC094*/ PPC::Runtime::ASM::mtlr(context->r0);
/*800AF298 000AC098*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*800AF29C 000AC09C*/ PPC::Runtime::ASM::blr();
}