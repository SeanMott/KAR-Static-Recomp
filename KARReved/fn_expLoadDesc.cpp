//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "memset.hpp"
#include "fn_8041A0EC.hpp"
#include "fn_8041A0EC.hpp"
#include "fn_HSD_ObjAlloc.hpp"
#include "fn___assert.hpp"
#include "memset.hpp"



void fn_expLoadDesc(PPC::Runtime::GCContext* context)
{
/*8041A164 00416F64*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x30, context->r1));
/*8041A168 00416F68*/ PPC::Runtime::ASM::mflr(context->r0);
/*8041A16C 00416F6C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r1));
/*8041A170 00416F70*/ PPC::Runtime::ASM::addi(context->r11, context->r1, 0x30);
/*8041A174 00416F74*/ PPC::Runtime::ASM::bl(_savegpr_27);
/*8041A178 00416F78*/ PPC::Runtime::ASM::mr(context->r28, context->r4);
/*8041A17C 00416F7C*/ PPC::Runtime::ASM::mr(context->r27, context->r3);
/*8041A180 00416F80*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*8041A184 00416F84*/ PPC::Runtime::ASM::li(context->r5, 0x10);
/*8041A188 00416F88*/ PPC::Runtime::ASM::bl(memset);
/*8041A18C 00416F8C*/ PPC::Runtime::ASM::cmplwi(context->r28, 0x0);
/*8041A190 00416F90*/ PPC::Runtime::ASM::beq(.L_8041A240);
/*8041A194 00416F94*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r28));
/*8041A198 00416F98*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x0);
/*8041A19C 00416F9C*/ PPC::Runtime::ASM::beq(.L_8041A1A8);
/*8041A1A0 00416FA0*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r27));
/*8041A1A4 00416FA4*/ PPC::Runtime::ASM::b(.L_8041A1B4);
RUNTIME_PPC_JUMP_LABEL(.L_8041A1A8, 0x8041A1A8) //this is a jump label
/*8041A1A8 00416FA8*/ PPC::Runtime::ASM::lis(context->r3, fn_8041A0EC @ Get_MemoryOffset_HighBit);
/*8041A1AC 00416FAC*/ PPC::Runtime::ASM::addi(context->r0, context->r3, fn_8041A0EC @ Get_MemoryOffset_LowBit);
/*8041A1B0 00416FB0*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r27));
RUNTIME_PPC_JUMP_LABEL(.L_8041A1B4, 0x8041A1B4) //this is a jump label
/*8041A1B4 00416FB4*/ PPC::Runtime::ASM::lwz(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r28));
/*8041A1B8 00416FB8*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*8041A1BC 00416FBC*/ PPC::Runtime::ASM::addi(context->r30, context->r1, 0x8);
/*8041A1C0 00416FC0*/ PPC::Runtime::ASM::cmplwi(context->r29, 0x0);
/*8041A1C4 00416FC4*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*8041A1C8 00416FC8*/ PPC::Runtime::ASM::bne(.L_8041A1D0);
/*8041A1CC 00416FCC*/ PPC::Runtime::ASM::b(.L_8041A234);
RUNTIME_PPC_JUMP_LABEL(.L_8041A1D0, 0x8041A1D0) //this is a jump label
/*8041A1D0 00416FD0*/ PPC::Runtime::ASM::lis(context->r3, lbl_8058BC3C @ Get_MemoryOffset_HighBit);
/*8041A1D4 00416FD4*/ PPC::Runtime::ASM::addi(context->r31, context->r3, lbl_8058BC3C @ Get_MemoryOffset_LowBit);
/*8041A1D8 00416FD8*/ PPC::Runtime::ASM::b(.L_8041A224);
RUNTIME_PPC_JUMP_LABEL(.L_8041A1DC, 0x8041A1DC) //this is a jump label
/*8041A1DC 00416FDC*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*8041A1E0 00416FE0*/ PPC::Runtime::ASM::bl(fn_HSD_ObjAlloc);
/* 8041A1E4 00416FE4  7C 7C 1B 79 */ mr. context->r28 , context->r3
/*8041A1E8 00416FE8*/ PPC::Runtime::ASM::bne(.L_8041A1FC);
/*8041A1EC 00416FEC*/ PPC::Runtime::ASM::li(context->r3, MemoryOffset_507 @ Get_MemoryOffset_SDA21);
/*8041A1F0 00416FF0*/ PPC::Runtime::ASM::li(context->r4, 0x485);
/*8041A1F4 00416FF4*/ PPC::Runtime::ASM::li(context->r5, MemoryOffset_504 @ Get_MemoryOffset_SDA21);
/*8041A1F8 00416FF8*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_8041A1FC, 0x8041A1FC) //this is a jump label
/*8041A1FC 00416FFC*/ PPC::Runtime::ASM::mr(context->r3, context->r28);
/*8041A200 00417000*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*8041A204 00417004*/ PPC::Runtime::ASM::li(context->r5, 0xc);
/*8041A208 00417008*/ PPC::Runtime::ASM::bl(memset);
/*8041A20C 0041700C*/ PPC::Runtime::ASM::stw(context->r28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r30));
/*8041A210 00417010*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r29));
/*8041A214 00417014*/ PPC::Runtime::ASM::addi(context->r29, context->r29, 0x8);
/*8041A218 00417018*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r30));
/*8041A21C 0041701C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r3));
/*8041A220 00417020*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r30));
RUNTIME_PPC_JUMP_LABEL(.L_8041A224, 0x8041A224) //this is a jump label
/*8041A224 00417024*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r29));
/*8041A228 00417028*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x0);
/*8041A22C 0041702C*/ PPC::Runtime::ASM::bne(.L_8041A1DC);
/*8041A230 00417030*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
RUNTIME_PPC_JUMP_LABEL(.L_8041A234, 0x8041A234) //this is a jump label
/*8041A234 00417034*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r27));
/*8041A238 00417038*/ PPC::Runtime::ASM::li(context->r0, -0x1);
/*8041A23C 0041703C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r27));
RUNTIME_PPC_JUMP_LABEL(.L_8041A240, 0x8041A240) //this is a jump label
/*8041A240 00417040*/ PPC::Runtime::ASM::addi(context->r11, context->r1, 0x30);
/*8041A244 00417044*/ PPC::Runtime::ASM::bl(_restgpr_27);
/*8041A248 00417048*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r1));
/*8041A24C 0041704C*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8041A250 00417050*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x30);
/*8041A254 00417054*/ PPC::Runtime::ASM::blr();
}