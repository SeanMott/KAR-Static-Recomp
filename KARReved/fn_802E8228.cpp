//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn_802E8228(PPC::Runtime::GCContext* context)
{
/*802E8228 002E5028*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x60, context->r1));
/*802E822C 002E502C*/ PPC::Runtime::ASM::mflr(context->r0);
/*802E8230 002E5030*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x64, context->r1));
/*802E8234 002E5034*/ PPC::Runtime::ASM::stfd(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x50, context->r1));
/*802E8238 002E5038*/ PPC::Runtime::ASM::psq_st(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x58, context->r1)0, context->qr0);
/*802E823C 002E503C*/ PPC::Runtime::ASM::stfd(context->f30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x40, context->r1));
/*802E8240 002E5040*/ PPC::Runtime::ASM::psq_st(context->f30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x48, context->r1)0, context->qr0);
/*802E8244 002E5044*/ PPC::Runtime::ASM::stfd(context->f29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x30, context->r1));
/*802E8248 002E5048*/ PPC::Runtime::ASM::psq_st(context->f29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x38, context->r1)0, context->qr0);
/*802E824C 002E504C*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r1));
/*802E8250 002E5050*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r1));
/*802E8254 002E5054*/ PPC::Runtime::ASM::stw(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*802E8258 002E5058*/ PPC::Runtime::ASM::mr(context->r29, context->r3);
/*802E825C 002E505C*/ PPC::Runtime::ASM::mr(context->r30, context->r4);
/*802E8260 002E5060*/ PPC::Runtime::ASM::addi(context->r3, context->r29, 0x24);
/*802E8264 002E5064*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r29));
/*802E8268 002E5068*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r12));
/*802E826C 002E506C*/ PPC::Runtime::ASM::mtctr(context->r12);
/*802E8270 002E5070*/ PPC::Runtime::ASM::bctrl();
/*802E8274 002E5074*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r30));
/*802E8278 002E5078*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*802E827C 002E507C*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*802E8280 002E5080*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r12));
/*802E8284 002E5084*/ PPC::Runtime::ASM::mtctr(context->r12);
/*802E8288 002E5088*/ PPC::Runtime::ASM::bctrl();
/*802E828C 002E508C*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*802E8290 002E5090*/ PPC::Runtime::ASM::mr(context->r4, context->r31);
/*802E8294 002E5094*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*802E8298 002E5098*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r3));
/*802E829C 002E509C*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*802E82A0 002E50A0*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r3));
/*802E82A4 002E50A4*/ PPC::Runtime::ASM::addi(context->r3, context->r1, 0x14);
/*802E82A8 002E50A8*/ PPC::Runtime::ASM::mr(context->r5, context->r3);
/*802E82AC 002E50AC*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*802E82B0 002E50B0*/ PPC::Runtime::ASM::bl(fn_PSVECSubtract);
/*802E82B4 002E50B4*/ PPC::Runtime::ASM::lfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*802E82B8 002E50B8*/ PPC::Runtime::ASM::addi(context->r3, context->r1, 0x8);
/*802E82BC 002E50BC*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*802E82C0 002E50C0*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*802E82C4 002E50C4*/ PPC::Runtime::ASM::stfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*802E82C8 002E50C8*/ PPC::Runtime::ASM::stfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*802E82CC 002E50CC*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*802E82D0 002E50D0*/ PPC::Runtime::ASM::bl(fn_803D2140);
/*802E82D4 002E50D4*/ PPC::Runtime::ASM::addi(context->r3, context->r29, 0x24);
/*802E82D8 002E50D8*/ PPC::Runtime::ASM::fmr(context->f29, context->f1);
/*802E82DC 002E50DC*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r29));
/*802E82E0 002E50E0*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r12));
/*802E82E4 002E50E4*/ PPC::Runtime::ASM::mtctr(context->r12);
/*802E82E8 002E50E8*/ PPC::Runtime::ASM::bctrl();
/*802E82EC 002E50EC*/ PPC::Runtime::ASM::addi(context->r3, context->r29, 0x24);
/*802E82F0 002E50F0*/ PPC::Runtime::ASM::fmr(context->f30, context->f1);
/*802E82F4 002E50F4*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r29));
/*802E82F8 002E50F8*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r12));
/*802E82FC 002E50FC*/ PPC::Runtime::ASM::mtctr(context->r12);
/*802E8300 002E5100*/ PPC::Runtime::ASM::bctrl();
/*802E8304 002E5104*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*802E8308 002E5108*/ PPC::Runtime::ASM::fmuls(context->f30, context->f1, context->f30);
/*802E830C 002E510C*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r30));
/*802E8310 002E5110*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r12));
/*802E8314 002E5114*/ PPC::Runtime::ASM::mtctr(context->r12);
/*802E8318 002E5118*/ PPC::Runtime::ASM::bctrl();
/*802E831C 002E511C*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*802E8320 002E5120*/ PPC::Runtime::ASM::fmr(context->f31, context->f1);
/*802E8324 002E5124*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r30));
/*802E8328 002E5128*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r12));
/*802E832C 002E512C*/ PPC::Runtime::ASM::mtctr(context->r12);
/*802E8330 002E5130*/ PPC::Runtime::ASM::bctrl();
/*802E8334 002E5134*/ PPC::Runtime::ASM::fmadds(context->f0, context->f1, context->f31, context->f30);
/*802E8338 002E5138*/ PPC::Runtime::ASM::fcmpo(cr0, context->f29, context->f0);
/*802E833C 002E513C*/ PPC::Runtime::ASM::mfcr(context->r0);
/*802E8340 002E5140*/ PPC::Runtime::ASM::srwi(context->r3, context->r0, 31);
/*802E8344 002E5144*/ PPC::Runtime::ASM::psq_l(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x58, context->r1)0, context->qr0);
/*802E8348 002E5148*/ PPC::Runtime::ASM::lfd(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x50, context->r1));
/*802E834C 002E514C*/ PPC::Runtime::ASM::psq_l(context->f30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x48, context->r1)0, context->qr0);
/*802E8350 002E5150*/ PPC::Runtime::ASM::lfd(context->f30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x40, context->r1));
/*802E8354 002E5154*/ PPC::Runtime::ASM::psq_l(context->f29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x38, context->r1)0, context->qr0);
/*802E8358 002E5158*/ PPC::Runtime::ASM::lfd(context->f29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x30, context->r1));
/*802E835C 002E515C*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r1));
/*802E8360 002E5160*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r1));
/*802E8364 002E5164*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x64, context->r1));
/*802E8368 002E5168*/ PPC::Runtime::ASM::lwz(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*802E836C 002E516C*/ PPC::Runtime::ASM::mtlr(context->r0);
/*802E8370 002E5170*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x60);
/*802E8374 002E5174*/ PPC::Runtime::ASM::blr();
}