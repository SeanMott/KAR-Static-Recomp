//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn_802881CC(PPC::Runtime::GCContext* context)
{
/*802881CC 00284FCC*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*802881D0 00284FD0*/ PPC::Runtime::ASM::mflr(context->r0);
/*802881D4 00284FD4*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*802881D8 00284FD8*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*802881DC 00284FDC*/ PPC::Runtime::ASM::mr(context->r31, context->r4);
/*802881E0 00284FE0*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/* 802881E4 00284FE4  7C 7E 1B 79 */ mr. context->r30 , context->r3
/*802881E8 00284FE8*/ PPC::Runtime::ASM::beq(.L_80288268);
/*802881EC 00284FEC*/ PPC::Runtime::ASM::lis(context->r3, lbl_804BC3DC @ Get_MemoryOffset_HighBit);
/*802881F0 00284FF0*/ PPC::Runtime::ASM::addic.(context->r0, context->r30, 0x28);
/*802881F4 00284FF4*/ PPC::Runtime::ASM::addi(context->r0, context->r3, lbl_804BC3DC @ Get_MemoryOffset_LowBit);
/*802881F8 00284FF8*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r30));
/*802881FC 00284FFC*/ PPC::Runtime::ASM::beq(.L_80288220);
/*80288200 00285000*/ PPC::Runtime::ASM::lis(context->r3, lbl_804F59EC @ Get_MemoryOffset_HighBit);
/*80288204 00285004*/ PPC::Runtime::ASM::addic.(context->r0, context->r30, 0x28);
/*80288208 00285008*/ PPC::Runtime::ASM::addi(context->r0, context->r3, lbl_804F59EC @ Get_MemoryOffset_LowBit);
/*8028820C 0028500C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r30));
/*80288210 00285010*/ PPC::Runtime::ASM::beq(.L_80288220);
/*80288214 00285014*/ PPC::Runtime::ASM::lis(context->r3, lbl_804BC3BC @ Get_MemoryOffset_HighBit);
/*80288218 00285018*/ PPC::Runtime::ASM::addi(context->r0, context->r3, lbl_804BC3BC @ Get_MemoryOffset_LowBit);
/*8028821C 0028501C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r30));
RUNTIME_PPC_JUMP_LABEL(.L_80288220, 0x80288220) //this is a jump label
/*80288220 00285020*/ PPC::Runtime::ASM::cmplwi(context->r30, 0x0);
/*80288224 00285024*/ PPC::Runtime::ASM::beq(.L_80288258);
/*80288228 00285028*/ PPC::Runtime::ASM::lis(context->r3, lbl_804BC374 @ Get_MemoryOffset_HighBit);
/*8028822C 0028502C*/ PPC::Runtime::ASM::addi(context->r0, context->r3, lbl_804BC374 @ Get_MemoryOffset_LowBit);
/*80288230 00285030*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r30));
/*80288234 00285034*/ PPC::Runtime::ASM::beq(.L_80288258);
/*80288238 00285038*/ PPC::Runtime::ASM::lis(context->r4, lbl_804BC344 @ Get_MemoryOffset_HighBit);
/*8028823C 0028503C*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*80288240 00285040*/ PPC::Runtime::ASM::addi(context->r0, context->r4, lbl_804BC344 @ Get_MemoryOffset_LowBit);
/*80288244 00285044*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r30));
/*80288248 00285048*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r30));
/*8028824C 0028504C*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r12));
/*80288250 00285050*/ PPC::Runtime::ASM::mtctr(context->r12);
/*80288254 00285054*/ PPC::Runtime::ASM::bctrl();
RUNTIME_PPC_JUMP_LABEL(.L_80288258, 0x80288258) //this is a jump label
/*80288258 00285058*/ PPC::Runtime::ASM::extsh.(context->r0, context->r31);
/*8028825C 0028505C*/ PPC::Runtime::ASM::ble(.L_80288268);
/*80288260 00285060*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*80288264 00285064*/ PPC::Runtime::ASM::bl(fn_8038CB78);
RUNTIME_PPC_JUMP_LABEL(.L_80288268, 0x80288268) //this is a jump label
/*80288268 00285068*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8028826C 0028506C*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*80288270 00285070*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*80288274 00285074*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*80288278 00285078*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8028827C 0028507C*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*80288280 00285080*/ PPC::Runtime::ASM::blr();
}