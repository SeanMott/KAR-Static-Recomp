//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_80289768.hpp"



void fn_8037E210(PPC::Runtime::GCContext* context)
{
/*8037E210 0037B010*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x30, context->r1));
/*8037E214 0037B014*/ PPC::Runtime::ASM::mflr(context->r0);
/*8037E218 0037B018*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r1));
/*8037E21C 0037B01C*/ PPC::Runtime::ASM::stfd(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r1));
/*8037E220 0037B020*/ PPC::Runtime::ASM::psq_st(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r1)0, context->qr0);
/*8037E224 0037B024*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*8037E228 0037B028*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*8037E22C 0037B02C*/ PPC::Runtime::ASM::stw(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8037E230 0037B030*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*8037E234 0037B034*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x9c, context->r3));
/*8037E238 0037B038*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x0);
/*8037E23C 0037B03C*/ PPC::Runtime::ASM::beq(.L_8037E350);
/*8037E240 0037B040*/ PPC::Runtime::ASM::lfs(context->f2, STRUCT_FLOAT_COUNT_1805E4C48 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8037E244 0037B044*/ PPC::Runtime::ASM::lis(context->r30, 0x1);
/*8037E248 0037B048*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x90, context->r31));
/*8037E24C 0037B04C*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x98, context->r31));
/*8037E250 0037B050*/ PPC::Runtime::ASM::lfs(context->f31, STRUCT_FLOAT_COUNT_1805E4C40 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8037E254 0037B054*/ PPC::Runtime::ASM::fmadds(context->f0, context->f2, context->f1, context->f0);
/*8037E258 0037B058*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x98, context->r31));
/*8037E25C 0037B05C*/ PPC::Runtime::ASM::b(.L_8037E310);
RUNTIME_PPC_JUMP_LABEL(.L_8037E260, 0x8037E260) //this is a jump label
/*8037E260 0037B060*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8c, context->r31));
/*8037E264 0037B064*/ PPC::Runtime::ASM::mulli(context->r0, context->r0, 0x14);
/*8037E268 0037B068*/ PPC::Runtime::ASM::add(context->r29, context->r31, context->r0);
/*8037E26C 0037B06C*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r29));
/*8037E270 0037B070*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x0);
/*8037E274 0037B074*/ PPC::Runtime::ASM::beq(.L_8037E28C);
/*8037E278 0037B078*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r29));
/*8037E27C 0037B07C*/ PPC::Runtime::ASM::li(context->r4, 0x10);
/*8037E280 0037B080*/ PPC::Runtime::ASM::bl(fn_removeBigStarModel);
/*8037E284 0037B084*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*8037E288 0037B088*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r29));
RUNTIME_PPC_JUMP_LABEL(.L_8037E28C, 0x8037E28C) //this is a jump label
/*8037E28C 0037B08C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8c, context->r31));
/*8037E290 0037B090*/ PPC::Runtime::ASM::li(context->r4, 0x10);
/*8037E294 0037B094*/ PPC::Runtime::ASM::mulli(context->r3, context->r0, 0x14);
/*8037E298 0037B098*/ PPC::Runtime::ASM::addi(context->r29, context->r3, 0xc);
/*8037E29C 0037B09C*/ PPC::Runtime::ASM::add(context->r29, context->r31, context->r29);
/*8037E2A0 0037B0A0*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r29));
/*8037E2A4 0037B0A4*/ PPC::Runtime::ASM::bl(fn_HSD_JObjSetFlagsAll?);
/*8037E2A8 0037B0A8*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r29));
/*8037E2AC 0037B0AC*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E4C44 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8037E2B0 0037B0B0*/ PPC::Runtime::ASM::bl(fn_HSD_JObjReqAnim);
/*8037E2B4 0037B0B4*/ PPC::Runtime::ASM::li(context->r0, 0x1);
/*8037E2B8 0037B0B8*/ PPC::Runtime::ASM::subi(context->r4, context->r30, 0x1);
/*8037E2BC 0037B0BC*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r29));
/*8037E2C0 0037B0C0*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r29));
/*8037E2C4 0037B0C4*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xa0, context->r31));
/*8037E2C8 0037B0C8*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x38, context->r3));
/*8037E2CC 0037B0CC*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xa4, context->r31));
/*8037E2D0 0037B0D0*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3c, context->r3));
/*8037E2D4 0037B0D4*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xa8, context->r31));
/*8037E2D8 0037B0D8*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x40, context->r3));
/*8037E2DC 0037B0DC*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8c, context->r31));
/*8037E2E0 0037B0E0*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x94, context->r31));
/*8037E2E4 0037B0E4*/ PPC::Runtime::ASM::mulli(context->r3, context->r0, 0x14);
/*8037E2E8 0037B0E8*/ PPC::Runtime::ASM::addi(context->r0, context->r3, 0x18);
/*8037E2EC 0037B0EC*/ PPC::Runtime::ASM::lwzx(context->r3, context->r31, context->r0);
/*8037E2F0 0037B0F0*/ PPC::Runtime::ASM::bl(fn_80289768);
/*8037E2F4 0037B0F4*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8c, context->r31));
/*8037E2F8 0037B0F8*/ PPC::Runtime::ASM::addi(context->r0, context->r3, 0x1);
/*8037E2FC 0037B0FC*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x6);
/*8037E300 0037B100*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8c, context->r31));
/*8037E304 0037B104*/ PPC::Runtime::ASM::blt(.L_8037E310);
/*8037E308 0037B108*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*8037E30C 0037B10C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8c, context->r31));
RUNTIME_PPC_JUMP_LABEL(.L_8037E310, 0x8037E310) //this is a jump label
/*8037E310 0037B110*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x98, context->r31));
/*8037E314 0037B114*/ PPC::Runtime::ASM::fcmpo(cr0, context->f1, context->f31);
/*8037E318 0037B118*/ PPC::Runtime::ASM::cror(eq, gt, eq);
/*8037E31C 0037B11C*/ PPC::Runtime::ASM::bne(.L_8037E330);
/*8037E320 0037B120*/ PPC::Runtime::ASM::fsubs(context->f0, context->f1, context->f31);
/*8037E324 0037B124*/ PPC::Runtime::ASM::li(context->r0, 0x1);
/*8037E328 0037B128*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x98, context->r31));
/*8037E32C 0037B12C*/ PPC::Runtime::ASM::b(.L_8037E348);
RUNTIME_PPC_JUMP_LABEL(.L_8037E330, 0x8037E330) //this is a jump label
/*8037E330 0037B130*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E4C4C @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8037E334 0037B134*/ PPC::Runtime::ASM::fcmpo(cr0, context->f1, context->f0);
/*8037E338 0037B138*/ PPC::Runtime::ASM::bge(.L_8037E344);
/*8037E33C 0037B13C*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E4C44 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8037E340 0037B140*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x98, context->r31));
RUNTIME_PPC_JUMP_LABEL(.L_8037E344, 0x8037E344) //this is a jump label
/*8037E344 0037B144*/ PPC::Runtime::ASM::li(context->r0, 0x0);
RUNTIME_PPC_JUMP_LABEL(.L_8037E348, 0x8037E348) //this is a jump label
/* 8037E348 0037B148  54 00 06 3F */ clrlwi. context->r0 , context->r0 , 24
/*8037E34C 0037B14C*/ PPC::Runtime::ASM::bne(.L_8037E260);
RUNTIME_PPC_JUMP_LABEL(.L_8037E350, 0x8037E350) //this is a jump label
/*8037E350 0037B150*/ PPC::Runtime::ASM::psq_l(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r1)0, context->qr0);
/*8037E354 0037B154*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r1));
/*8037E358 0037B158*/ PPC::Runtime::ASM::lfd(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r1));
/*8037E35C 0037B15C*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*8037E360 0037B160*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*8037E364 0037B164*/ PPC::Runtime::ASM::lwz(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8037E368 0037B168*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8037E36C 0037B16C*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x30);
/*8037E370 0037B170*/ PPC::Runtime::ASM::blr();
}